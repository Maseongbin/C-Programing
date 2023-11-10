#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int r = 0;
    double q = 0;
    double m = 0;
    double B = 0;
    double v = 0;
    double F = 0;

    printf("������(m) = ");
    scanf("%d", &r);

    printf("\n");

    q = 1.6 * pow(10, -19);
    printf("���������� ���Ϸ�(C) = %.1lf * 10^%d C\n", q * pow(10, 19), -19);

    m = 9.1 * pow(10, -31);
    printf("����(kg) = %.1lf * 10^%d kg\n", m * pow(10, 31), -31);

    B = 5.7 * pow(10, -5);
    printf("�ڱ����� ũ��(T) = %.1lf * 10^%d T\n\n", B * pow(10, 5), -5);

    printf("(b) �������ڰ� �ڱ��忡 �Ի�� ���� �ӷ��� ���ΰ�?\n\n");

    printf("F   = qvB\n");
    printf("qvB = (m * v^2) / r\n");
    printf("v   = qBr / m\n");
    printf("    = (%e * %lf * %d) / %e\n", q, B, r, m);
    v = (q * B * r) / m;
    printf("    = %lf\n", v);
    printf("    = %.1lf * 10^%d m/s\n\n", v / pow(10, floor(log10(v))), (int)floor(log10(v)));

    printf("================================================================================================\n\n");

    printf("(c) �ڱ��忡�� �������ڰ� �޴� ���� ���ΰ�?\n\n");

    F = q * v * B;
    printf("F = %e * %e * %e\n", q, v, B);
    printf("  = %e\n", F);
    printf("  = %.1lf * 10^%d N\n", F * pow(10, -floor(log10(F))), (int)floor(log10(F)));

    return 0;
}
