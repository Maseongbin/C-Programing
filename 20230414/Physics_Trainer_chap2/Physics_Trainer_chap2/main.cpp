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
    printf("� ����� ��ӵ��θ� ó�� %.0lf km�� %.0lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
    printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %.0lf km�� %.0lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
    printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("���� ������ �ð�(h) = �Ÿ�(d) / �ӷ�(v)�Դϴ�.\n");

        printf("�� ����� ó�� %0.1lf km�� ���� �� �ɸ� �ð��� %0.1lf km(�� ���� �̵��Ÿ�) / %0.1lf km/h(�� ���� �ӷ�) = %0.1lf h(�ɸ� �ð�)�̴�. \n", distance1, distance1, velocity1, time1);
        printf("�� ����� �ٽ� %0.1lf km�� ���� �� �ɸ� �ð��� %0.1lf km(�� ���� �̵��Ÿ�) / %0.1lf km/h(�� ���� �ӷ�) = %0.1lf h(�ɸ� �ð�)�̴�. \n", distance2, distance2, velocity2, time2);
        printf("���ɽð� �Ļ縦 �ϴµ� �ɸ��� �ð��� %0.1lf�̴�.\n", time3);
        all_time = time1 + time2 + time3;
        printf("�� ����� ����������� �� �ɸ��ð��� %0.1lf h(�� ���� �ð�) + %0.1lf h(�� ���� �ð�) + %0.1lf h(�Ļ� �� �ð�) = %0.1lf h�̴�. \n", time1, time2, time3, all_time);
        all_distance = distance1 + distance2;
        printf("�� ����� ����������� �� �̵��� �Ÿ��� %0.1lf km(�� ���� �Ÿ�) + %0.1lf km(�� ���� �Ÿ�) = %0.1lf km�̴�. \n", distance1, distance2, all_distance);
        


    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n");
        printf("���� ������ ��� �ӷ� = �� �̵� �Ÿ�(���� �Ÿ� - ó�� �Ÿ�) / �� �ɸ� �ð�(���� �ð� - ó�� �ð�)�Դϴ�.\n");
        printf("�� ����� ����������� ��� �ӷ��� �� �̵� �Ÿ� / �� �ɸ� �ð��̴�.\n");
        all_distance = distance1 + distance2;
        printf("�� �̵� �Ÿ�: %0.1lf km\n", all_distance);
        all_time = time1 + time2 + time3;
        printf("�� �ɸ� �ð�: %0.1lf h\n", all_time);

        average_velocity = (distance1 + distance2) / (time1 + time2 + time3);
        printf("�� ����� ��� �ӷ��� %0.1lf km(�� �̵� �Ÿ�) / %0.1lf h(�� �ɸ� �ð�) = %0.1lf km/h(��� �ӷ�) \n", all_distance, all_time, average_velocity);
        printf("�� ����� ����������� ��� �ӷ�: %0.1lf km/h \n", average_velocity);
        printf("=================================================================\n");
        printf("\n\n\n");
    }


    printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�Դϴ�.\n");
        printf("���� ������ ��� �ӵ� = ���� / �� �ɸ� �ð��Դϴ�.\n");
        displacement = distance1 - distance2;
        printf("�� ����� %0.1lf km���ٰ� �ٽ� %0.1lf km �ǵ��� �Ա� ������ ������ %0.1lf km �̴�.\n", distance1, distance2, displacement);
        all_time = time1 + time2 + time3;
        printf("�� ����� ����������� �� �ɸ��ð��� %0.1lf h(�� ���� �ð�)+ %0.1lf h(�� ���� �ð�) + %0.1lf h(�Ļ� �� �ð�) = %0.1lf h�̴�. \n", time1, time2, time3, all_time);
        
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n");
        printf("�� ����� ����������� ��� �ӵ��� ���� / �� �ɸ� �ð��̴�.\n");
        displacement = distance1 - distance2;
        printf("����: %0.1lf km\n", displacement);
        all_time = time1 + time2 + 1;
        printf("�� �ɸ� �ð�: %0.1lf h\n", all_time);

        average_speed = displacement / (time1 + time2 + 1);
        printf("�� ����� ����������� ��� �ӵ��� %0.1lf km(����) / %0.1lf h(�� �ɸ� �ð�) = %0.1lf km/h(��� �ӵ�) \n", displacement, all_time, average_speed);
        printf("�� ����� ����������� ��� �ӵ�: %.0lf km/h \n", average_speed);
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