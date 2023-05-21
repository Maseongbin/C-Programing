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

void Excersize_2_5(int solution, int answer) //한라대학교 미래모빌리티공학과 마성빈
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
	double time3 = 1;
	double displacement = 0;
	double average_velocity = 0;
	double average_speed = 0;


	printf("\n\n");
	printf("2-5 \n");
	printf("어떤 사람이 고속도로를 처음 %6.2lf km는 %6.2lf km/h의 속력으로 달리고, \n", distance1, velocity1);
	printf("1시간 동안 점심식사를 한 후에 다시 %6.2lf km를 %6.2lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
	printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");
	printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");

		printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

		printf("관련 공식은  vavg = Δx / Δt\n");
		printf("vavg: 평균속력, Δx: 거리변화량, Δt: 시간변화량\n");
		printf("x1:갈 때 거리, x2: 올 때 거리. t1: 갈 때 시간, t2: 올 때 시간, t3: 식사 한 시간, v1: 갈 때 속력, v2: 올 때 속력\n\n");


		printf("t1 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance1, velocity1, distance1, velocity1, time1);
		printf("t2 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance2, velocity2, distance2, velocity2, time2);
		printf("t3 = %5.2lfh\n\n", time3);

		all_distance = distance1 + distance2;
		printf("Δx = %5.2lfkm + %5.2lfkm = %5.2lfkm \n\n", distance1, distance2, all_distance);

		all_time = time1 + time2 + time3;
		printf("Δt = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh \n\n", time1, time2, time3, all_time);


		all_distance = distance1 + distance2;
		all_time = time1 + time2 + time3;
		average_velocity = all_distance / all_time;
		printf("vavg =  %5.2lfkm /  %5.2lfh\n", all_distance, all_time);
		printf("     =  %5.2lfkm/h\n\n", average_velocity);
		


	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("이 사람의 여행과정에서 평균 속력: %5.2lfkm/h\n\n", average_velocity);
		
		
	}


	

	if (solution == SHOW)
	{
		
		printf("=========================   풀 이   =============================\n\n");

		printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

		printf("관련 공식은  vavg = Δx / Δt\n");
		printf("vavg: 평균속도, Δx: 거리변화량, Δt: 시간변화량 \n\n");

		displacement = distance1 - distance2;
		printf("Δx = %5.2lfkm - %5.2lfkm = %5.2lfkm\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("Δt = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh\n\n", time1, time2, time3, all_time);


		all_time = time1 + time2 + time3;
		average_speed = displacement / all_time;
		printf("vavg = %5.2lfkm / %5.2lfh\n", displacement, all_time);
		printf("     = %5.2lfkm/h\n\n", average_speed);
		

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("이 사람의 여행과정에서 평균 속도: %5.2lf km/h\n\n", average_speed);
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



	Excersize_2_5(1, 1);


}