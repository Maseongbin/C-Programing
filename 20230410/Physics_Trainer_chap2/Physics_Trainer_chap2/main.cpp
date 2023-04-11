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
    double xf1 = 0;
    double xi1 = 0;
    double tf1 = 0;
    double ti1 = 0;
    double xf2 = 0;
    double xi2 = 0;
    double tf2 = 0;
    double ti2 = 0;
    double distance1 = 200;
    double velocity1 = 90;
    double distance2 = 200;
    double velocity2 = 50;
    double time1 = 0;
    double h1 = time1;
    time1 = distance1 / velocity1;
    double time2 = 0;
    double h2 = time2;
    time2 = distance2 / velocity2;
    double displacement = 0;
    double average_velocity = 200 / 90;
    displacement = distance1 - distance2;
    double average_speed;
    average_speed = displacement / (time1 + time2 + 1);

    printf("\n\n");
    printf("2-5 \n");
    printf("어떤 사람이 고속도로를 처음 %.0lf km는 %.0lf km/h의 속력으로 달리고, \n", distance1, velocity1);
    printf("1시간 동안 점심식사를 한 후에 다시 %.0lf km를 %.0lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
    printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("관련 공식은 v평균 = (xf - xi) / (tf - ti)입니다.\n"); // v = 속력

        printf("어떤 사람이 고속도로를 처음 %.0lfkm는 %.0lfkm/h의 속력으로 달릴때 %.0lf h는 다음과 같습니다.\n", distance1, velocity1, time1);
        printf("어떤 사람이 고속도로를 다시 %.0lfkm는 %.0lfkm/h의 속력으로 달릴때 %.0lf h는 다음과 같습니다.\n\n", distance2, velocity2, time2);



    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        xf1 = distance1;
        xi1 = 0;
        tf1 = velocity1;
        ti1 = 0;
        xf2 = distance2;
        xi2 = 0;
        tf2 = velocity2;
        ti2 = 0;

        printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n");
        h1 = (xf1 - xi1) / (tf1 - ti1);
        h2 = (xf2 - xi2) / (tf2 - ti2);
        time1 = h1;
        time2 = h2;
        average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
        printf("이 사람의 여행과정에서 평균 속력은 다음과 같습니다. : %.0lf m/s \n", average_velocity);
        printf("=================================================================\n");
        printf("\n\n\n");
    }


    printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화입니다.\n");
        printf("관련 공식은 s평균 = 변위 / (time1 + time2 + 1) 입니다.\n"); //s = 속도

        displacement = distance1 - distance2;
        printf("이 사람이 어떤 장소를 갔다가 되돌아 왔을 때의 변위는 무엇인가?\n");
        printf("이 사람의 여행과정에서 변위는 다음과 같습니다. : %.0lf m/s \n\n", displacement);

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n");
        h1 = (xf1 - xi1) / (tf1 - ti1);
        h2 = (xf2 - xi2) / (tf2 - ti2);
        time1 = h1;
        time2 = h2;
        average_speed = displacement / (time1 + time2 + 1);
        printf("이 사람의 여행과정에서 평균 속도는 다음과 같습니다. : %.0lf m/s \n", average_speed);


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