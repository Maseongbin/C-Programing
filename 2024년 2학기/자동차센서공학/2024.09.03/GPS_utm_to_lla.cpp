#include <stdio.h>
#include <math.h>
#include <string.h>

#define WayPoints_NO 500  // 최대 waypoints 수를 정의

// UTM 좌표와 방향을 저장하는 구조체
struct WayPoints {
    double x;      // UTM X 좌표
    double y;      // UTM Y 좌표
    double theta;  // 방향 또는 각도
};

// waypoints를 저장할 배열
struct WayPoints my_waypoints_list[WayPoints_NO];
int no_waypoints = -1;  // 마지막 waypoint의 인덱스

// UTM 좌표를 위도/경도로 변환하는 함수
void ToLatLon(double utmX, double utmY, const char* utmZone, double* latitude, double* longitude) {
    // UTM 존이 북반구인지 확인
    int isNorthHemisphere = utmZone[strlen(utmZone) - 1] >= 'N';

    // 위도와 경도의 보정 값 (필요에 따라 조정 가능)
    double diflat = -0.00066286966871111111111111111111111111;
    double diflon = -0.0003868060578;

    int zone;
    sscanf(utmZone, "%d", &zone);  // utmZone 문자열에서 구역 번호 추출

    // WGS84 타원체 파라미터
    double c_sa = 6378137.000000;  // 장반경
    double c_sb = 6356752.314245;  // 단반경
    double e2 = sqrt((pow(c_sa, 2) - pow(c_sb, 2))) / c_sb;
    double e2cuadrada = pow(e2, 2);
    double c = pow(c_sa, 2) / c_sb;
    double x = utmX - 500000;
    double y = isNorthHemisphere ? utmY : utmY - 10000000;
    
    double s = ((zone * 6.0) - 183.0);
    double lat = y / (c_sa * 0.9996);
    double v = (c / sqrt(1 + (e2cuadrada * pow(cos(lat), 2)))) * 0.9996;
    double a = x / v;
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

    // 경도와 위도를 계산하고 보정 값 적용
    *longitude = ((delt * (180.0 / M_PI)) + s) + diflon;
    *latitude = ((lat + (1 + e2cuadrada * pow(cos(lat), 2) - (3.0 / 2.0) * e2cuadrada * sin(lat) * cos(lat) * (tao - lat)) * (tao - lat)) * (180.0 / M_PI)) + diflat;
}

// waypoints를 파일에서 읽어오는 함수
void init_waypoints(const char* file_path) {
    FILE *fp_read = fopen(file_path, "r");

    if (fp_read == NULL)  
    {
        printf("Error: Cannot open file %s\n", file_path);
        return;
    }

    int result;
    double temp1, temp2, temp3;

    no_waypoints = -1;

    // 파일에서 데이터를 읽어와서 배열에 저장
    do
    {
        ++no_waypoints;
        result = fscanf(fp_read, "%lf %lf %lf", &temp1, &temp2, &temp3);

        if (result == 3)  // fscanf가 3개의 값을 성공적으로 읽은 경우
        {
            my_waypoints_list[no_waypoints].x = temp1;
            my_waypoints_list[no_waypoints].y = temp2;
            my_waypoints_list[no_waypoints].theta = temp3;
        }
        else if (result == EOF)
        {
            if (no_waypoints >= 0)  // 유효한 데이터가 읽혔을 때 인덱스 조정
            {
                no_waypoints--;  
            }
            break;
        }
    } while (result != EOF && no_waypoints < WayPoints_NO - 1);

    fclose(fp_read);
}

// 메인 함수
int main(void) {
    double latitude, longitude;
    const char* utmZone = "52N";  // UTM 존을 정의
    const char* input_file = "shark_full.txt";  // 입력 파일 경로
    const char* output_file = "gps_utm_to_lla.txt";  // 출력 파일 경로

    init_waypoints(input_file);  // waypoints 초기화

    FILE *fp_write = fopen(output_file, "w");

    if (fp_write == NULL)  
    {
        printf("Error, Cannot open %s for writing\n", output_file);
        return 1;
    }

    // 각 waypoint에 대해 UTM 좌표를 위도/경도로 변환하고 출력 파일에 기록
    for (int i = 0; i <= no_waypoints; i++)
    {
        double utmX = my_waypoints_list[i].x;
        double utmY = my_waypoints_list[i].y;
        double theta = my_waypoints_list[i].theta;

        // UTM을 위도/경도로 변환
        ToLatLon(utmX, utmY, utmZone, &latitude, &longitude);

        // 원본 좌표와 변환된 좌표 출력
        printf("Waypoints[%d] UTM Coordinates: X: %9.6lf, Y: %9.6lf, Zone: %s\n", i, utmX, utmY, utmZone);
        printf("Waypoints[%d] Converted to Latitude/Longitude: Latitude: %9.6lf, Longitude: %9.6lf\n\n", i, latitude, longitude);

        // 변환된 좌표를 출력 파일에 기록
        fprintf(fp_write, "%9.6lf %9.6lf %9.6lf\n", latitude, longitude, theta);
    }
    
    // waypoints 수를 출력
    printf("Number of waypoints: %d\n", no_waypoints + 1);
    fclose(fp_write);

    return 0;
}
