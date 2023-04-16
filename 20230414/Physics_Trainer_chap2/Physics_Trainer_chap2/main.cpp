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
		printf("���� ������  �Ÿ�(��x) = �ӷ�(v) x �ð�(t) �Դϴ�.\n\n");

		printf("%6.2lf km�� %6.2lf km/h�� �� �� �ɸ� �ð��� %6.2lfkm(�� ���� �̵��Ÿ�) / %6.2lfkm/h(�� ���� �ӷ�) = %6.2lfh(�ɸ� �ð�)�̴�. \n", distance1, velocity1, distance1, velocity1, time1);
		printf("%6.2lf km�� %6.2lf km/h�� �� �� �ɸ� �ð��� %6.2lfkm(�� ���� �̵��Ÿ�) / %6.2lfkm/h(�� ���� �ӷ�) = %6.2lfh(�ɸ� �ð�)�̴�. \n", distance2, velocity2, distance2, velocity2, time2);
		printf("���ɽð� �Ļ縦 �ϴµ� �ɸ��� �ð��� %6.2lfh�̴�.\n\n", time3);

		all_time = time1 + time2 + time3;
		printf("�� �ɸ��ð��� %6.2lfh(�� ���� �ð�) + %6.2lfh(�� ���� �ð�) + %6.2lfh(�Ļ� �� �ð�) = %6.2lfh�̴�. \n\n", time1, time2, time3, all_time);

		all_distance = distance1 + distance2;
		printf("�� �̵��� �Ÿ��� %6.2lfkm(�� ���� �Ÿ�) + %6.2lfkm(�� ���� �Ÿ�) = %6.2lfkm�̴�. \n\n\n", distance1, distance2, all_distance);



	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n\n");

		printf("���� ������ ��� �ӷ�(average_velocity) = �� �̵� �Ÿ�(all_distance) / �� �ɸ� �ð�(all_time)�̴�.  vavg = ��x/��t\n\n");

		all_distance = distance1 + distance2;
		printf("�� �̵� �Ÿ�: %6.2lfkm \n\n", all_distance);

		all_time = time1 + time2 + time3;
		printf("�� �ɸ� �ð�: %6.2lfh \n\n", all_time);

		average_velocity = (distance1 + distance2) / (time1 + time2 + time3);
		printf("��� �ӷ��� %6.2lfkm(�� �̵� �Ÿ�) / %6.2lfh(�� �ɸ� �ð�) = %6.2lfkm/h(��� �ӷ�) \n", all_distance, all_time, average_velocity);
		printf("�� ����� ����������� ��� �ӷ�: %6.2lfkm/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�Դϴ�.\n");
		printf("���� ������ ��� �ӵ�(average_speed) = ����(displacement) / �� �ɸ� �ð�(all_time)�Դϴ�.\n\n");

		displacement = distance1 - distance2;
		printf("������ %6.2lfkm(�� ���� �Ÿ�) - %6.2lfkm (�� ���� �Ÿ�) = %6.2lfkm(����)�̴�.\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("�� ����� ����������� �� �ɸ��ð��� %6.2lfh(�� ���� �ð�)+ %6.2lfh(�� ���� �ð�) + %6.2lfh(�Ļ� �� �ð�) = %6.2lfh�̴�. \n\n\n", time1, time2, time3, all_time);

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n");
		printf("�� ����� ����������� ��� �ӵ��� ���� / �� �ɸ� �ð��̴�.\n");

		displacement = distance1 - distance2;
		printf("����: %6.2lfkm\n\n", displacement);

		all_time = time1 + time2 + 1;
		printf("�� �ɸ� �ð�: %6.2lfh\n\n", all_time);

		average_speed = displacement / (time1 + time2 + 1);
		printf("��� �ӵ��� %6.2lfkm(����) / %6.2lfh(�� �ɸ� �ð�) = %6.2lfkm/h(��� �ӵ�) \n", displacement, all_time, average_speed);
		printf("�� ����� ����������� ��� �ӵ�: %6.2lf km/h \n", average_speed);
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