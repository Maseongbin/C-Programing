#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, x, y, distance;

    printf("ax + by +c = 0 \n\n");

    printf("������ ���� a�� �Է��Ͻÿ�: ");
    scanf("%lf", &a);

    printf("������ ���� b�� �Է��Ͻÿ�: ");
    scanf("%lf", &b);

    printf("����� c�� �Է��Ͻÿ�: ");
    scanf("%lf", &c);

    printf("�� ���� x ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%lf", &x);

    printf("�� ���� y ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%lf", &y);

    distance = fabs(a * x + b * y + c) / sqrt(a * a + b * b);

    printf("d = |ax + by +c| / �� (a^2 + b^2)\n");
    printf("  = %.2lf\n", distance);

    return 0;
}
