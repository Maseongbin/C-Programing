#include <stdio.h>
#include <math.h>
#include <string.h>

#define WayPoints_NO 500  // 최대 500개의 웨이포인트를 저장할 수 있는 배열 크기 정의

// 웨이포인트를 저장하기 위한 구조체 정의
struct WayPoints
{
    double x;      // UTM X 좌표
    double y;      // UTM Y 좌표
    double theta;  // 방향각 (이 코드에서는 사용되지 않지만 입력파일에 존재함)
};

// 웨이포인트 배열 및 현재 웨이포인트 개수 초기화
struct WayPoints my_waypoints_list[WayPoints_NO];
int no_waypoints = -1; // 현재 웨이포인트의 개수, 초기값은 -1

// UTM 좌표를 위도/경도로 변환하는 함수
void ToLatLon(double utmX, double utmY, const char* utmZone, double* latitude, double* longitude)
{
    // UTM 지역이 북반구인지 남반구인지 판별
    int isNorthHemisphere = utmZone[strlen(utmZone) - 1] >= 'N';
    double diflat = -0.00066286966871111111111111111111111111; // 위도 변환 오차 수정값
    double diflon = -0.0003868060578; // 경도 변환 오차 수정값

    int zone;
    sscanf(utmZone, "%d", &zone); // UTM 지역에서 지역 번호 추출

    // WGS84 타원체 파라미터
    double c_sa = 6378137.000000; // 대반경
    double c_sb = 6356752.314245; // 소반경
    double e2 = sqrt((pow(c_sa, 2) - pow(c_sb, 2))) / c_sb; // 타원체 이심률
    double e2cuadrada = pow(e2, 2);
    double c = pow(c_sa, 2) / c_sb;
    double x = utmX - 500000; // UTM X 좌표의 변환
    double y = isNorthHemisphere ? utmY : utmY - 10000000; // UTM Y 좌표의 변환 (북반구/남반구 구분)

    double s = ((zone * 6.0) - 183.0); // UTM 지역의 중심 경도
    double lat = y / (c_sa * 0.9996); // 초기 위도 계산
    double v = (c / sqrt(1 + (e2cuadrada * pow(cos(lat), 2)))) * 0.9996; // 곡률 반경
    double a = x / v; // UTM X 좌표의 변환
    double a1 = sin(2 * lat); 
    double a2 = a1 * pow((cos(lat)), 2);
    double j2 = lat + (a1 / 2.0);
    double j4 = ((3 * j2) + a2) / 4.0;
    double j6 = ((5 * j4) + pow(a2 * (cos(lat)), 2)) / 3.0;
    double alfa = (3.0 / 4.0) * e2cuadrada;
    double beta = (5.0 / 3.0) * pow(alfa, 2);
    double gama = (35.0 / 27.0) * pow(alfa, 3);
    double bm = 0.9996 * c * (lat - alfa * j2 + beta * j4 - gama * j6);
    double b = (y - bm) / v;
    double epsi = ((e2cuadrada * pow(a, 2)) / 2.0) * pow((cos(lat)), 2);
    double eps = a * (1 - (epsi / 3.0));
    double nab = (b * (1 - epsi)) + lat;
    double senoheps = (exp(eps) - exp(-eps)) / 2.0;
    double delt = atan(senoheps / (cos(nab)));
    double tao = atan(cos(delt) * tan(nab));

    // 위도와 경도로 변환
    *longitude = ((delt * (180.0 / M_PI)) + s) + diflon;
    *latitude = ((lat + (1 + e2cuadrada * pow(cos(lat), 2) - (3.0 / 2.0) * e2cuadrada * sin(lat) * cos(lat) * (tao - lat)) * (tao - lat)) * (180.0 / M_PI)) + diflat;
}

// 웨이포인트를 파일에서 읽어 배열에 초기화하는 함수
void init_waypoints(const char* file_path)
{
    FILE *fp_read = fopen(file_path, "r"); // 입력 파일 열기

    if (fp_read == NULL)  
    {
        printf("Error, Cannot read file\n"); // 파일 열기 오류 메시지
        return;
    }

    int result;
    double temp1, temp2, temp3;

    no_waypoints = -1; // 웨이포인트 개수 초기화

    do
    {
        ++no_waypoints; // 웨이포인트 인덱스 증가
        result = fscanf(fp_read, "%lf %lf %lf", &temp1, &temp2, &temp3); // 파일에서 3개의 값을 읽기

        if (result == 3)  // fscanf가 3개의 값을 성공적으로 읽었는지 확인
        {
            my_waypoints_list[no_waypoints].x = temp1;
            my_waypoints_list[no_waypoints].y = temp2;
            my_waypoints_list[no_waypoints].theta = temp3;
        }
        else if (result == EOF)
        {
            no_waypoints--;  // EOF에 도달하면 마지막 증가를 무시하고 종료
            break;
        }
    } while (result != EOF && no_waypoints < WayPoints_NO - 1); // 파일 끝까지 읽거나 배열 크기 한계를 초과할 때까지 반복

    fclose(fp_read); // 파일 닫기
}

int main(void)
{
    double latitude, longitude;
    const char* utmZone = "52N"; // UTM 지역 설정
    const char* input_file = "shark_full.txt"; // 입력 파일 경로
    const char* output_file = "gps_utm_to_lla.txt"; // 출력 파일 경로

    init_waypoints(input_file); // 웨이포인트 배열 초기화

    FILE *fp_write = fopen(output_file, "w"); // 출력 파일 열기

    if (fp_write == NULL)  
    {
        printf("Error, Cannot open %s for writing\n", output_file); // 출력 파일 열기 오류 메시지
        return 1;
    }

    // 웨이포인트 배열을 순회하며 UTM 좌표를 위도/경도로 변환 후 출력 파일에 저장
    for (int i = 0; i <= no_waypoints; i++)
    {
        double utmX = my_waypoints_list[i].x;
        double utmY = my_waypoints_list[i].y;
        double theta = my_waypoints_list[i].theta;

        // UTM 좌표를 위도/경도로 변환
        ToLatLon(utmX, utmY, utmZone, &latitude, &longitude);

        // 변환 결과를 콘솔에 출력
        printf("UTM Coordinates: X: %9.6lf, Y: %9.6lf, Zone: %s\n", utmX, utmY, utmZone);
        printf("Converted to Latitude/Longitude: Latitude: %9.6lf, Longitude: %9.6lf\n\n", latitude, longitude);

        // 변환된 좌표를 출력 파일에 저장
        fprintf(fp_write, "%9.6lf %9.6lf %9.6lf\n", latitude, longitude, theta);
    }

    fclose(fp_write); // 출력 파일 닫기

    return 0;
}
