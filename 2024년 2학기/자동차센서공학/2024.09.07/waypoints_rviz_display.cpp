#include <ros/ros.h> 
#include "std_msgs/Int8.h" 
#include "std_msgs/Int16.h" 
#include "std_msgs/Float32.h"
#include <std_msgs/String.h> 
#include <sensor_msgs/NavSatFix.h>
#include <geometry_msgs/Pose2D.h> 
#include <visualization_msgs/MarkerArray.h> 
#include <visualization_msgs/Marker.h> 
#include <vector> 
#include <math.h>

// UTM 변환에 필요한 상수 정의
#define UTM_PI 3.14159265358979323846
#define UTM_A 6378137.0 // 지구의 반지름 (m)
#define UTM_E 0.081819191 // 지구의 편평률
#define UTM_K0 0.9996 // 스케일 팩터

#define WayPoints_NO 500 // 최대 웨이포인트 개수 정의

// 3차원 좌표를 표현하는 구조체 정의
struct Point3D
{
    double x;
    double y;
    double z;
};

// 웨이포인트 리스트를 표현하는 구조체 정의
struct WayPoints
{
    double x;
    double y;
    double theta; // 각도 (라디안)
};

struct WayPoints my_waypoints_list[WayPoints_NO]; // 웨이포인트를 저장할 배열
int no_waypoints = -1; // 현재 웨이포인트 개수 초기화

// GPS 데이터 저장을 위한 전역 변수
double latitude, longitude, altitude;
double utm_east, utm_north;
bool new_gps_data = false; // 새로운 GPS 데이터 플래그

ros::Publisher marker_pub; // ROS 퍼블리셔 변수
std::vector<Point3D> vec_point; // 웨이포인트를 저장할 벡터

// 기준 좌표 저장 변수 및 플래그
double datum_lat = 0.0;
double datum_lon = 0.0;
double datum_utm_east = 0.0;
double datum_utm_north = 0.0;
bool datum_set = false; // 기준 좌표가 설정되었는지 여부

// 위도와 경도를 UTM 좌표로 변환하는 함수
void ToUTM(double latitude, double longitude, double& utmX, double& utmY) 
{
    // 위도, 경도를 라디안으로 변환
    double lat = latitude * UTM_PI / 180.0;
    double lon = longitude * UTM_PI / 180.0;

    // UTM 존 계산
    int zone = (int)((longitude + 180) / 6) + 1;
    double lon0 = (zone * 6 - 183) * UTM_PI / 180.0;

    // UTM 변환 공식을 사용해 동/북 좌표 계산
    double N = UTM_A / sqrt(1 - UTM_E * UTM_E * sin(lat) * sin(lat));
    double T = tan(lat) * tan(lat);
    double C = UTM_E * UTM_E * cos(lat) * cos(lat) / (1 - UTM_E * UTM_E);
    double A = (lon - lon0) * cos(lat);

    // 지구 곡면의 길이 M 계산
    double M = UTM_A * ((1 - UTM_E * UTM_E / 4 - 3 * UTM_E * UTM_E * UTM_E * UTM_E / 64 - 5 * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E / 256) * lat
              - (3 * UTM_E * UTM_E / 8 + 3 * UTM_E * UTM_E * UTM_E * UTM_E / 32 + 45 * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E / 1024) * sin(2 * lat)
              + (15 * UTM_E * UTM_E * UTM_E * UTM_E / 256 + 45 * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E / 1024) * sin(4 * lat)
              - (35 * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E * UTM_E / 3072) * sin(6 * lat));

    // UTM 좌표 변환 후 결과 저장
    utmX = UTM_K0 * N * (A + (1 - T + C) * A * A * A / 6
           + (5 - 18 * T + T * T + 72 * C - 58 * UTM_E * UTM_E) * A * A * A * A * A / 120)
           + 500000.0;

    utmY = UTM_K0 * (M + N * tan(lat) * (A * A / 2 + (5 - T + 9 * C + 4 * C * C) * A * A * A * A / 24
           + (61 - 58 * T + T * T + 600 * C - 330 * UTM_E * UTM_E) * A * A * A * A * A * A / 720));

    if (latitude < 0) // 남반구 처리
    {
        utmY += 10000000.0;
    }
}

// 기준 좌표 설정 함수
void set_datum(double lat, double lon)
{
    datum_lat = lat;
    datum_lon = lon;
    ToUTM(datum_lat, datum_lon, datum_utm_east, datum_utm_north); // UTM 변환
    datum_set = true;
    ROS_INFO("Datum set: Latitude = %f, Longitude = %f", datum_lat, datum_lon);
    ROS_INFO("Datum UTM: East = %f, North = %f", datum_utm_east, datum_utm_north);
}

// RViz에서 노드를 시각화하기 위한 MarkerArray 생성 함수
visualization_msgs::MarkerArray make_display_markers(const std::vector<Point3D>& vec_point)
{
    visualization_msgs::MarkerArray marker_array; // MarkerArray 객체 생성
    
    for (size_t i = 0; i < vec_point.size(); i++)
    {
        const Point3D& o_node = vec_point[i]; // 현재 포인트
        
        visualization_msgs::Marker node; // 각 노드에 대한 Marker 객체 생성
        node.header.frame_id = "map"; // 기준 프레임 설정
        node.header.stamp = ros::Time::now();
        node.type = visualization_msgs::Marker::SPHERE; // 구 형태의 마커 설정
        node.id = i;
        node.action = visualization_msgs::Marker::ADD;
        node.pose.orientation.w = 1.0;
        node.pose.position.x = o_node.x; // x 좌표
        node.pose.position.y = o_node.y; // y 좌표

        node.color.r = 0.0; // 마커 색상 설정 (초록색)
        node.color.g = 1.0;
        node.color.b = 0.0;
        node.color.a = 1.0;

        node.scale.x = 1.0; // 마커 크기 설정
        node.scale.y = 1.0; 
        node.scale.z = 0.1; 
        
        marker_array.markers.push_back(node); // MarkerArray에 추가
    }

    return marker_array;
}

// 웨이포인트 초기화 및 파일로부터 읽기
void init_waypoints(const char* file_path)
{
    FILE *fp_read = fopen(file_path, "r"); // 파일 열기

    if (fp_read == NULL)  
    {
        ROS_ERROR("Error: Cannot open file %s", file_path); // 파일 열기 실패 시 에러 메시지 출력
        return;
    }

    int result;
    double temp1, temp2, temp3;

    no_waypoints = -1;

    do
    {
        ++no_waypoints;
        result = fscanf(fp_read, "%lf %lf %lf", &temp1, &temp2, &temp3); // 파일에서 데이터를 읽어 웨이포인트로 변환

        if (result == 3) 
        {
            my_waypoints_list[no_waypoints].x = temp1;
            my_waypoints_list[no_waypoints].y = temp2;
            my_waypoints_list[no_waypoints].theta = temp3;

            double utmX, utmY;
            ToUTM(temp1, temp2, utmX, utmY); // 위도와 경도를 UTM으로 변환

            if (!datum_set) // 기준점이 설정되지 않았으면 설정
            {
                set_datum(temp1, temp2);
            }

            Point3D utm_point;
            utm_point.x = utmX - datum_utm_east; // 기준점과의 차이로 동 좌표 설정
            utm_point.y = utmY - datum_utm_north; // 기준점과의 차이로 북 좌표 설정
            utm_point.z = 0.0; // 고도는 0으로 설정
            vec_point.push_back(utm_point); // 벡터에 추가
        }

    } while (result != EOF);

    fclose(fp_read);
    ROS_INFO("Loaded %d waypoints", no_waypoints + 1);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "gps_to_utm_rviz_node");
    ros::NodeHandle n;

    std::string waypoints_file = "/home/amap/2024_onefifth_catkin_ws/src/waypoints_rviz_display/lla.txt";
    std::string marker_topic = "marker/node";
    
    ros::param::get("~waypoints_file", waypoints_file);
    ros::param::get("~marker_topic", marker_topic);
    
    marker_pub = n.advertise<visualization_msgs::MarkerArray>(marker_topic, 1);
        
    ros::Rate loop_rate(1);  // 1 Hz, adjust as needed

    init_waypoints(waypoints_file.c_str());

    while (ros::ok())
    {
        visualization_msgs::MarkerArray marker_array = make_display_markers(vec_point);
        marker_pub.publish(marker_array);
        
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}

