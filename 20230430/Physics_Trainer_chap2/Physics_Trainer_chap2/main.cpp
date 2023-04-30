#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_5(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
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
	printf("� ����� ��ӵ��θ� ó�� %6.2lf km�� %6.2lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
	printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %6.2lf km�� %6.2lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
	printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������  �Ÿ�(��x) = �ӷ�(v) x �ð�(t) �̴�.\n");
		printf("�� ������ �����Ͽ� �ٲٸ� �ӷ�(v) = �Ÿ�(��x) / �ð�(t) �̴�.\n ");

		printf("���� %5.2lf km�� %5.2lf km/h�� �� �� �ɸ� �ð��� %5.2lfkm(�� ���� �̵��Ÿ�) / %5.2lfkm/h(�� ���� �ӷ�) = %5.2lfh(�ɸ� �ð�)�̰�. \n", distance1, velocity1, distance1, velocity1, time1);
		printf("%5.2lf km�� %5.2lf km/h�� �� �� �ɸ� �ð��� %5.2lfkm(�� ���� �̵��Ÿ�) / %5.2lfkm/h(�� ���� �ӷ�) = %5.2lfh(�ɸ� �ð�)�̴�. \n", distance2, velocity2, distance2, velocity2, time2);
		printf("���ɽð� �Ļ縦 �ϴµ� �ɸ��� �ð��� %6.2lfh�̴�.\n\n", time3);

		all_time = time1 + time2 + time3;
		printf("�� �ɸ��ð��� %5.2lfh(�� ���� �ð�) + %5.2lfh(�� ���� �ð�) + %5.2lfh(�Ļ� �� �ð�) = %5.2lfh�̴�. \n\n", time1, time2, time3, all_time);

		all_distance = distance1 + distance2;
		printf("�� �̵��� �Ÿ��� %5.2lfkm(�� ���� �Ÿ�) + %5.2lfkm(�� ���� �Ÿ�) = %5.2lfkm�̴�. \n\n", distance1, distance2, all_distance);



		printf("���� ������  vavg = ��x / ��t �̴�.\n");

		printf("vavg:��ռӷ�, ��x:����, ��t:�ð���ȭ�� \n");
		all_distance = distance1 + distance2;
		all_time = time1 + time2 + time3;
		printf("vavg =  %5.2lfm /  %5.2lfs)\n", all_distance, all_time);
		average_velocity = all_distance / all_time;
		printf("vavg =  %5.2lfm/s\n\n\n", average_velocity);


	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n\n");

		printf("�� ����� ����������� ��� �ӷ�: %5.2lfkm/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�̴�.\n");

		displacement = distance1 - distance2;
		printf("���� ������ %5.2lfkm(�� ���� �Ÿ�) - %5.2lfkm (�� ���� �Ÿ�) = %5.2lfkm(����)�̴�.\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("�� ����� ����������� �� �ɸ��ð��� %5.2lfh(�� ���� �ð�)+ %5.2lfh(�� ���� �ð�) + %5.2lfh(�Ļ� �� �ð�) = %5.2lfh�̴�. \n\n", time1, time2, time3, all_time);

		printf("vavg:��ռӵ�, ��x:����, ��t:�ð���ȭ�� \n");
		all_time = time1 + time2 + time3;
		printf("vavg =  %5.2lfm /  %5.2lfs)\n", displacement, all_time);
		average_speed = displacement / all_time;
		printf("vavg =  %5.2lfm/s\n\n\n", average_speed);

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");
		printf("�� ����� ����������� ��� �ӵ�: %5.2lf km/h \n", average_speed);
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