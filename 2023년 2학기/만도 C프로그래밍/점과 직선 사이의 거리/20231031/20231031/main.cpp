#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x, y, distance, x2, y2;

    printf("ax + by + c = 0\n\n");
    printf("��� a�� �Է��ϼ���: ");
    scanf("%f", &a);
    printf("��� b�� �Է��ϼ���: ");
    scanf("%f", &b);
    printf("��� c�� �Է��ϼ���: ");
    scanf("%f", &c);

    printf("���� x ��ǥ�� �Է��ϼ���: ");
    scanf("%f", &x);
    printf("���� y ��ǥ�� �Է��ϼ���: ");
    scanf("%f", &y);

    distance = fabs(a * x + b * y + c) / sqrt(a * a + b * b);

    x2 = x - a * (a * x + b * y + c) / (a * a + b * b);
    y2 = y - b * (a * x + b * y + c) / (a * a + b * b);

    printf("\n");
    printf("���������� �Ÿ�: %.2f\n", distance);
    printf("������ ������ ���� ���� ��: (%.2f, %.2f)\n", x2, y2);

    return 0;
}
