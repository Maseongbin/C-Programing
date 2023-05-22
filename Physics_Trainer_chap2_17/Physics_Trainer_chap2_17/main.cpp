#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_17(int solution, int answer) //한라대학교 미래모빌리티공학과 마성빈
{
    srand(time(NULL));
    double east_velocity = 6.0 + rand() % (10 + 1) - 3; //동쪽으로 갈 때 속도
    double west_velocity = 4.0 + rand() % (10 + 1) - 2; //서쪽으로 갈 때 속도
    double delta_velocity;
    double delta_time;
    double time1 = 10 + rand() % (10 + 1) - 5; //방향 변환 전 걸린 시간
    double time2;
    double time0 = 0;
    double acceleration; //가속도
    double distance1; //속도가 0이 될 때까지 이동한 거리
    double distance2;//출발한지 10s 후 이동한 거리
    double displacement; //출발한지 10s 후 변위
    double distance3;




    printf("\n\n");
    printf("2-17 \n");
    printf("처음에 동쪽으로 %6.2lfm/s의 속도로 운동하던 물체가 일정한 비율로 속도가 변하여 \n", east_velocity);
    printf("%6.2lfs 후 서쪽으로 %6.2lfm/s로 운동하였다. \n\n", time1, west_velocity);
    printf("(a) %5.2lfs 동안 속도의 변화량은 얼마인가?\n\n", time1);
    printf("(b) 가속도의 크기는 얼마이며, 그 방향은 어느 방향인가?\n\n");
    printf("(c) 출발한 지 몇 초 후에 속도가 0이 되는가?\n\n");
    printf("(d) 속도가 0이 될 때까지 이동한 거리는 얼마인가?\n\n");
    printf("(e) 출발한 지 %6.2lfs 후의 변위와 이동한 거리는 각각 얼마인가?\n\n", time1);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) %6.2lfs 동안 속도의 변화량은 얼마인가?\n\n", time1);

        printf("관련 공식은  a = Δv / Δt 입니다.\n");
        printf("a: 가속도, Δv: 속도변화량,  Δt: 시간변화량.\n\n");
        delta_velocity = -east_velocity - west_velocity;
        printf("Δv = v - v0\n");
        printf("    = -%6.2lfm/s - %6.2lfm/s\n\n", east_velocity, west_velocity);
        printf("    = %6.2lfm/s\n\n", delta_velocity);

        delta_time = time1 - time0;
        printf("Δt = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n", time1, time0);
        printf("    = %6.2lfs\n\n", delta_time);

        acceleration = delta_velocity / delta_time;
        printf("a   = (v - v0) / (t - t0)\n");
        printf("    = Δv / Δt\n");
        printf("    =  %6.2lfm/s /  %6.2lfs\n", delta_velocity, delta_time);
        printf("    =  %6.2lfm/s^2\n\n", acceleration);

    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("%6.2lfs 동안 속도의 변화량: %6.2lfm/s^2\n\n", time1, acceleration);

    }




    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(b) 가속도의 크기는 얼마이며, 그 방향은 어느 방향인가?\n\n");
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a: 가속도, |a|: 가속도의 크기\n\n");

        printf("|a| = |%6.2lfm/s^2|\n", acceleration);
        printf("    = %6.2lfm/s^2\n\n", fabs(acceleration));

        printf("동쪽을 (+)방향, 서쪽을 (-)방향으로 지정\n\n");
        printf("방향 = (-), 서쪽 방향\n\n");

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("가속도의 크기: %6.2lfm/s^2\n\n", fabs(acceleration));
        printf("방향: (-), 서쪽 방향\n\n");


    }

    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(c) 출발한 지 몇 초 후에 속도가 0이 되는가?\n\n");

        printf("관련 공식은 v = v0 + a x t 입니다.\n");
        printf("v: 나중속도, v0: 초기속도, a: 가속도, t: 시간\n\n");

        printf("v  =      0m/s\n");
        printf("v0 = %6.2lfm/s\n", east_velocity);
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n\n", acceleration);

        time2 = (0 - east_velocity) / acceleration;
        printf("t  = (v - v0) / a\n");
        printf("   = (0m/s - %6.2lfm/s) / %6.2lfm/s^2\n", east_velocity, acceleration);
        printf("   = %6.2lfs\n\n", time2);



    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("속도가 0이 될 때 시간: %6.2lfs\n\n", time2);

    }

    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(d) 속도가 0이 될 때까지 이동한 거리는 얼마인가?\n\n");

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");   // 수평운동의 경우
        printf("v: 나중속도, v0: 처음속도, a: 가속도, Δx : 거리변화량\n\n");

        printf("v  =      0m/s\n");
        printf("v0 = %6.2lfm/s\n", east_velocity);
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n", acceleration);
        time2 = (0 - east_velocity) / acceleration;
        printf("t  = %6.2lfs\n\n", time2);

        distance1 = ((0 * 0) - (east_velocity * east_velocity)) / (2 * acceleration);
        printf("Δx1 = (v^2 - v0^2) / 2a\n");
        printf("    = (0^2 - %6.2lfm/s^2) / 2 * %6.2lfm/s^2\n", east_velocity, acceleration);
        printf("    = %6.2lfm\n\n", distance1);





    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("속도가 0이 될 때까지 이동한 거리: %6.2lfm\n\n", distance1);

    }

    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(e) 출발한 지 %6.2lfs 후의 변위와 이동한 거리는 각각 얼마인가?\n\n", time1);

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");   // 수평운동의 경우
        printf("v: 나중속도, v0: 처음속도, a: 가속도, Δx : 거리변화량\n\n");

        printf("v0 = 0m/s\n");
        printf("v  = %6.2lfm/s\n", west_velocity);
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n\n", acceleration);

        distance2 = ((west_velocity * west_velocity) - (0 * 0)) / (2 * acceleration);
        printf("Δx2 = (v^2 - v0^2) / 2a\n");
        printf("    = ((%6.2lfm/s)^2 - 0)) / 2 * %6.2lfm/s^2\n", west_velocity, acceleration);
        printf("    = %6.2lfm\n\n", distance2);

        distance3 = distance1 + fabs(distance2);
        printf("이동한 거리 = Δx1 + | Δx2 | \n");
        printf("            = %6.2lfm + %6.2lfm\n", distance1, fabs(distance2));
        printf("            = %6.2lfm\n\n", distance3);

        displacement = distance1 + distance2;
        printf("변위 = Δx1 + Δx2\n");
        printf("     = %6.2lfm + (%6.2lfm)\n", distance1, distance2);
        printf("     = %6.2lfm\n", displacement);



    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("이동한 거리 = %6.2lfm\n\n", distance3);

        printf("변위 = %6.2lfm\n\n", displacement);

        printf("=================================================================\n");
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



    Excersize_2_17(1, 1);


}