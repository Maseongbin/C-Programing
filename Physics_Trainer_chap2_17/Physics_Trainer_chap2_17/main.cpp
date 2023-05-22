#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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

void Excersize_2_17(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    double east_velocity = 6.0 + rand() % (10 + 1) - 3; //�������� �� �� �ӵ�
    double west_velocity = 4.0 + rand() % (10 + 1) - 2; //�������� �� �� �ӵ�
    double delta_velocity;
    double delta_time;
    double time1 = 10 + rand() % (10 + 1) - 5; //���� ��ȯ �� �ɸ� �ð�
    double time2;
    double time0 = 0;
    double acceleration; //���ӵ�
    double distance1; //�ӵ��� 0�� �� ������ �̵��� �Ÿ�
    double distance2;//������� 10s �� �̵��� �Ÿ�
    double displacement; //������� 10s �� ����
    double distance3;




    printf("\n\n");
    printf("2-17 \n");
    printf("ó���� �������� %6.2lfm/s�� �ӵ��� ��ϴ� ��ü�� ������ ������ �ӵ��� ���Ͽ� \n", east_velocity);
    printf("%6.2lfs �� �������� %6.2lfm/s�� ��Ͽ���. \n\n", time1, west_velocity);
    printf("(a) %5.2lfs ���� �ӵ��� ��ȭ���� ���ΰ�?\n\n", time1);
    printf("(b) ���ӵ��� ũ��� ���̸�, �� ������ ��� �����ΰ�?\n\n");
    printf("(c) ����� �� �� �� �Ŀ� �ӵ��� 0�� �Ǵ°�?\n\n");
    printf("(d) �ӵ��� 0�� �� ������ �̵��� �Ÿ��� ���ΰ�?\n\n");
    printf("(e) ����� �� %6.2lfs ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?\n\n", time1);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(a) %6.2lfs ���� �ӵ��� ��ȭ���� ���ΰ�?\n\n", time1);

        printf("���� ������  a = ��v / ��t �Դϴ�.\n");
        printf("a: ���ӵ�, ��v: �ӵ���ȭ��,  ��t: �ð���ȭ��.\n\n");
        delta_velocity = -east_velocity - west_velocity;
        printf("��v = v - v0\n");
        printf("    = -%6.2lfm/s - %6.2lfm/s\n\n", east_velocity, west_velocity);
        printf("    = %6.2lfm/s\n\n", delta_velocity);

        delta_time = time1 - time0;
        printf("��t = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n", time1, time0);
        printf("    = %6.2lfs\n\n", delta_time);

        acceleration = delta_velocity / delta_time;
        printf("a   = (v - v0) / (t - t0)\n");
        printf("    = ��v / ��t\n");
        printf("    =  %6.2lfm/s /  %6.2lfs\n", delta_velocity, delta_time);
        printf("    =  %6.2lfm/s^2\n\n", acceleration);

    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("%6.2lfs ���� �ӵ��� ��ȭ��: %6.2lfm/s^2\n\n", time1, acceleration);

    }




    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(b) ���ӵ��� ũ��� ���̸�, �� ������ ��� �����ΰ�?\n\n");
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a: ���ӵ�, |a|: ���ӵ��� ũ��\n\n");

        printf("|a| = |%6.2lfm/s^2|\n", acceleration);
        printf("    = %6.2lfm/s^2\n\n", fabs(acceleration));

        printf("������ (+)����, ������ (-)�������� ����\n\n");
        printf("���� = (-), ���� ����\n\n");

    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("���ӵ��� ũ��: %6.2lfm/s^2\n\n", fabs(acceleration));
        printf("����: (-), ���� ����\n\n");


    }

    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(c) ����� �� �� �� �Ŀ� �ӵ��� 0�� �Ǵ°�?\n\n");

        printf("���� ������ v = v0 + a x t �Դϴ�.\n");
        printf("v: ���߼ӵ�, v0: �ʱ�ӵ�, a: ���ӵ�, t: �ð�\n\n");

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
        printf("=========================   �� ��   =============================\n\n");

        printf("�ӵ��� 0�� �� �� �ð�: %6.2lfs\n\n", time2);

    }

    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(d) �ӵ��� 0�� �� ������ �̵��� �Ÿ��� ���ΰ�?\n\n");

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");   // ������ ���
        printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, ��x : �Ÿ���ȭ��\n\n");

        printf("v  =      0m/s\n");
        printf("v0 = %6.2lfm/s\n", east_velocity);
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n", acceleration);
        time2 = (0 - east_velocity) / acceleration;
        printf("t  = %6.2lfs\n\n", time2);

        distance1 = ((0 * 0) - (east_velocity * east_velocity)) / (2 * acceleration);
        printf("��x1 = (v^2 - v0^2) / 2a\n");
        printf("    = (0^2 - %6.2lfm/s^2) / 2 * %6.2lfm/s^2\n", east_velocity, acceleration);
        printf("    = %6.2lfm\n\n", distance1);





    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("�ӵ��� 0�� �� ������ �̵��� �Ÿ�: %6.2lfm\n\n", distance1);

    }

    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(e) ����� �� %6.2lfs ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?\n\n", time1);

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");   // ������ ���
        printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, ��x : �Ÿ���ȭ��\n\n");

        printf("v0 = 0m/s\n");
        printf("v  = %6.2lfm/s\n", west_velocity);
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n\n", acceleration);

        distance2 = ((west_velocity * west_velocity) - (0 * 0)) / (2 * acceleration);
        printf("��x2 = (v^2 - v0^2) / 2a\n");
        printf("    = ((%6.2lfm/s)^2 - 0)) / 2 * %6.2lfm/s^2\n", west_velocity, acceleration);
        printf("    = %6.2lfm\n\n", distance2);

        distance3 = distance1 + fabs(distance2);
        printf("�̵��� �Ÿ� = ��x1 + | ��x2 | \n");
        printf("            = %6.2lfm + %6.2lfm\n", distance1, fabs(distance2));
        printf("            = %6.2lfm\n\n", distance3);

        displacement = distance1 + distance2;
        printf("���� = ��x1 + ��x2\n");
        printf("     = %6.2lfm + (%6.2lfm)\n", distance1, distance2);
        printf("     = %6.2lfm\n", displacement);



    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("�̵��� �Ÿ� = %6.2lfm\n\n", distance3);

        printf("���� = %6.2lfm\n\n", displacement);

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