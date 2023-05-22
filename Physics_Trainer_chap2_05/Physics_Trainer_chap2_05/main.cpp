#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_5(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
	srand(time(NULL));

	double distance1 = 200 + rand() % (20 + 1) - 10;
	double velocity1 = 90 + rand() % (10 + 1) - 4;
	double distance2 = 200 + rand() % (20 + 1) - 10;
	double velocity2 = 50 + rand() % (10 + 1) - 2;
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
	printf("� ����� ���ӵ��θ� ó�� %6.2lf km�� %6.2lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
	printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %6.2lf km�� %6.2lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
	printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");
	printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

		printf("���� ������  vavg = ��x / ��t\n");
		printf("vavg: ��ռӷ�, ��x: �Ÿ���ȭ��, ��t: �ð���ȭ��\n");
		printf("x1:�� �� �Ÿ�, x2: �� �� �Ÿ�. t1: �� �� �ð�, t2: �� �� �ð�, t3: �Ļ� �� �ð�, v1: �� �� �ӷ�, v2: �� �� �ӷ�\n\n");


		printf("t1 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance1, velocity1, distance1, velocity1, time1);
		printf("t2 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance2, velocity2, distance2, velocity2, time2);
		printf("t3 = %5.2lfh\n\n", time3);

		all_distance = distance1 + distance2;
		printf("��x = %5.2lfkm + %5.2lfkm = %5.2lfkm \n\n", distance1, distance2, all_distance);

		all_time = time1 + time2 + time3;
		printf("��t = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh \n\n", time1, time2, time3, all_time);


		all_distance = distance1 + distance2;
		all_time = time1 + time2 + time3;
		average_velocity = all_distance / all_time;
		printf("vavg = ��x / ��t\n");
		printf("     =  %5.2lfkm /  %5.2lfh\n", all_distance, all_time);
		printf("     =  %5.2lfkm/h\n\n", average_velocity);



	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("�� ����� ����������� ��� �ӷ�: %5.2lfkm/h\n\n", average_velocity);


	}




	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

		printf("���� ������  vavg = ��x / ��t\n");
		printf("vavg: ��ռӵ�, ��x: �Ÿ���ȭ��, ��t: �ð���ȭ�� \n\n");

		displacement = distance1 - distance2;
		printf("��x = %5.2lfkm - %5.2lfkm = %5.2lfkm\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("��t = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh\n\n", time1, time2, time3, all_time);


		all_time = time1 + time2 + time3;
		average_speed = displacement / all_time;
		printf("vavg = ��x / ��t\n");
		printf("     = %5.2lfkm / %5.2lfh\n", displacement, all_time);
		printf("     = %5.2lfkm/h\n\n", average_speed);


	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("�� ����� ����������� ��� �ӵ�: %5.2lf km/h\n\n", average_speed);
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