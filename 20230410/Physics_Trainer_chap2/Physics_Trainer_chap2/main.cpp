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
    printf("� ����� ��ӵ��θ� ó�� %.0lf km�� %.0lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
    printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %.0lf km�� %.0lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
    printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("���� ������ v��� = (xf - xi) / (tf - ti)�Դϴ�.\n"); // v = �ӷ�

        printf("� ����� ��ӵ��θ� ó�� %.0lfkm�� %.0lfkm/h�� �ӷ����� �޸��� %.0lf h�� ������ �����ϴ�.\n", distance1, velocity1, time1);
        printf("� ����� ��ӵ��θ� �ٽ� %.0lfkm�� %.0lfkm/h�� �ӷ����� �޸��� %.0lf h�� ������ �����ϴ�.\n\n", distance2, velocity2, time2);



    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        xf1 = distance1;
        xi1 = 0;
        tf1 = velocity1;
        ti1 = 0;
        xf2 = distance2;
        xi2 = 0;
        tf2 = velocity2;
        ti2 = 0;

        printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n");
        h1 = (xf1 - xi1) / (tf1 - ti1);
        h2 = (xf2 - xi2) / (tf2 - ti2);
        time1 = h1;
        time2 = h2;
        average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
        printf("�� ����� ����������� ��� �ӷ��� ������ �����ϴ�. : %.0lf m/s \n", average_velocity);
        printf("=================================================================\n");
        printf("\n\n\n");
    }


    printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=================================================================\n");
        printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�Դϴ�.\n");
        printf("���� ������ s��� = ���� / (time1 + time2 + 1) �Դϴ�.\n"); //s = �ӵ�

        displacement = distance1 - distance2;
        printf("�� ����� � ��Ҹ� ���ٰ� �ǵ��� ���� ���� ������ �����ΰ�?\n");
        printf("�� ����� ����������� ������ ������ �����ϴ�. : %.0lf m/s \n\n", displacement);

    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n");
        h1 = (xf1 - xi1) / (tf1 - ti1);
        h2 = (xf2 - xi2) / (tf2 - ti2);
        time1 = h1;
        time2 = h2;
        average_speed = displacement / (time1 + time2 + 1);
        printf("�� ����� ����������� ��� �ӵ��� ������ �����ϴ�. : %.0lf m/s \n", average_speed);


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