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

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은  거리(Δx) = 속력(v) x 시간(t) 이다.\n");
		printf("위 공식을 이항하여 바꾸면 속력(v) = 거리(Δx) / 시간(t) 이다.\n ");

		printf("따라서 %5.2lf km를 %5.2lf km/h로 갈 때 걸린 시간은 %5.2lfkm(갈 때의 이동거리) / %5.2lfkm/h(갈 때의 속력) = %5.2lfh(걸린 시간)이고. \n", distance1, velocity1, distance1, velocity1, time1);
		printf("%5.2lf km를 %5.2lf km/h로 올 때 걸린 시간은 %5.2lfkm(올 때의 이동거리) / %5.2lfkm/h(올 때의 속력) = %5.2lfh(걸린 시간)이다. \n", distance2, velocity2, distance2, velocity2, time2);
		printf("점심시간 식사를 하는데 걸리는 시간은 %6.2lfh이다.\n\n", time3);

		all_time = time1 + time2 + time3;
		printf("총 걸린시간은 %5.2lfh(갈 때의 시간) + %5.2lfh(올 때의 시간) + %5.2lfh(식사 한 시간) = %5.2lfh이다. \n\n", time1, time2, time3, all_time);

		all_distance = distance1 + distance2;
		printf("총 이동한 거리는 %5.2lfkm(갈 때의 거리) + %5.2lfkm(올 때의 거리) = %5.2lfkm이다. \n\n", distance1, distance2, all_distance);



		printf("관련 공식은  vavg = Δx / Δt 이다.\n");

		printf("vavg:평균속력, Δx:변위, Δt:시간변화량 \n");
		all_distance = distance1 + distance2;
		all_time = time1 + time2 + time3;
		printf("vavg =  %5.2lfm /  %5.2lfs)\n", all_distance, all_time);
		average_velocity = all_distance / all_time;
		printf("vavg =  %5.2lfm/s\n\n\n", average_velocity);


	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n\n");

		printf("이 사람의 여행과정에서 평균 속력: %5.2lfkm/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화이다.\n");

		displacement = distance1 - distance2;
		printf("따라서 변위는 %5.2lfkm(갈 때의 거리) - %5.2lfkm (올 때의 거리) = %5.2lfkm(변위)이다.\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("이 사람의 여행과정에서 총 걸린시간은 %5.2lfh(갈 때의 시간)+ %5.2lfh(올 때의 시간) + %5.2lfh(식사 한 시간) = %5.2lfh이다. \n\n", time1, time2, time3, all_time);

		printf("vavg:평균속도, Δx:변위, Δt:시간변화량 \n");
		all_time = time1 + time2 + time3;
		printf("vavg =  %5.2lfm /  %5.2lfs)\n", displacement, all_time);
		average_speed = displacement / all_time;
		printf("vavg =  %5.2lfm/s\n\n\n", average_speed);

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n\n");
		printf("이 사람의 여행과정에서 평균 속도: %5.2lf km/h \n", average_speed);
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