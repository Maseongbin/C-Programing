#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 




void Excersize_2_4(int solution, int answer)
{

	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("수평면 위에 정지하고 있던 물체가 한쪽 방향으로 직선운동을 할 때,\n");
	printf("물체의 이동거리와 시간의 관계가 그림 P2-4와 같다.\n\n");
	printf("(a) 출발하여 %.0lf s 동안 물체의 평균속력은 몇 m/s인가?\n\n", a_average_velocity);

	printf("(b) 출발 후 %.0lf s 때의 순간속력은 몇 m/s인가?\n\n", b_Instantaneous_speed);


}


void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("경비행기가 이륙하기 위해서는 속력이 %.0lf m/s에 도달해야 한다.\n", speed);
	printf("%.1lf m/s^2으로 일정하게 가속한다면\n\n", acceleration);
	printf("이륙속도에 도달하기 위해서 얼마의 활주거리가 필요한가?\n\n");


}


void Excersize_2_24(int solution, int answer)
{

	double height = 39.2;
	double second_velocity = 5;


	printf("\n\n");
	printf("2-24 \n");
	printf("높이가 %.1lf m인 10층 옥상에서\n", height);
	printf("공을 수평방향으로 초속도 %.0lf m/s로 던졌다.\n\n", second_velocity);
	printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");

	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n\n");


}



int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_4(0, 0);
	Excersize_2_14(0, 0);
	Excersize_2_24(0, 0);
}