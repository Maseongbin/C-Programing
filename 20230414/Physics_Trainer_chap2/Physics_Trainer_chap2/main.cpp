#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_5(int solution, int answer)
{
    double distance1 = 200;
    double velocity1 = 90;
    double distance2 = 200;
    double velocity2 = 50;
    double all_distance = 0;
    double all_time = 0;
    double time1 = 0;
    time1 = distance1 / velocity1;
    double time2 = 0;
    time2 = distance2 / velocity2;
    double rest = 1;
    double displacement = 0;
    double average_velocity = 0;
    double average_speed = 0;
    

    printf("\n\n");
    printf("2-5 \n");
    printf("어떤 사람이 고속도로를 처음 %.0lf km는 %.0lf km/h의 속력으로 달리고, \n", distance1, velocity1);
    printf("1시간 동안 점심식사를 한 후에 다시 %.0lf km를 %.0lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
    printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("관련 공식은 v평균 = (나중 거리 - 처음 거리) / (나중 시간 - 처음 시간)입니다.\n"); // v = 속력

        printf("이 사람이 처음 %0.1lf km를 갔을 때 걸린 시간%0.1lf h은 %0.1lf km / %0.1lf km/h이다. \n", distance1, time1, distance1, velocity1);
        printf("이 사람이 다시 %0.1lf km를 갔을 때 걸린 시간%0.1lf h은 %0.1lf km / %0.1lf km/h이다. \n", distance2, time2, distance2, velocity2);
        all_time = time1 + time2 + rest;
        printf("이 사람의 여행과정에서 총 걸린시간%0.1lf h은 %0.1lf h + %0.1lf h + %0.1lf h이다. \n", all_time, time1, time2, rest);
        all_distance = distance1 + distance2;
        printf("이 사람의 여행과정에서 총 이동한 거리%0.1lf km는 %0.1lf km + %0.1lf km이다. \n", all_distance, distance1, distance2);
        


    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n");
        printf("이 사람의 여행과정에서 평균 속력은 총 이동 거리 / 총 걸린 시간이다.\n");
        all_distance = distance1 + distance2;
        printf("총 이동 거리: %0.1lf km\n", all_distance);
        all_time = time1 + time2 + 1;
        printf("총 걸린 시간: %0.1lf h\n", all_time);

        average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
        printf("%0.1lf km/h(평균 속력) = %0.1lf km(총 이동 거리) / %0.1lf h(총 걸린 시간)\n", average_velocity, all_distance, all_time);
        printf("이 사람의 여행과정에서 평균 속력: %.0lf km/h \n", average_velocity);
        printf("=================================================================\n");
        printf("\n\n\n");
    }


    printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화입니다.\n");
        printf("관련 공식은 s평균 = 변위 / 총 걸린 시간입니다.\n"); //s = 속도

        displacement = distance1 - distance2;
        printf("이 사람이 %0.1lf km갔다가 다시 %0.1lf km되돌아 왔을 때의 변위는 %0.1lf km이다.\n", distance1, distance2, displacement);
        all_time = time1 + time2 + rest;
        printf("이 사람의 여행과정에서 총 걸린시간%0.1lf h은 %0.1lf h+ %0.1lf h+ %0.1lf h이다. \n", all_time, time1, time2, rest);
        
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n");
        printf("이 사람의 여행과정에서 평균 속도는 변위 / 총 걸린 시간이다.\n");
        displacement = distance1 - distance2;
        printf("변위: %0.1lf km\n", displacement);
        all_time = time1 + time2 + 1;
        printf("총 걸린 시간: %0.1lf h\n", all_time);

        average_speed = displacement / (time1 + time2 + 1);
        printf("%0.1lf km/h(평균 속도) = %0.1lf km(변위) / %0.1lf h(총 걸린 시간)\n", average_speed ,displacement,all_time);
        
        printf("이 사람의 여행과정에서 평균 속도: %.0lf km/h \n", average_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }




}


int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");



    //Excersize_2_5(0, 0);


    Excersize_2_5(Show_Solution, Answer);



}