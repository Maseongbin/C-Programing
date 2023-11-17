#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, x, y, distance;

    printf("ax + by +c = 0 \n\n");

    printf("직선의 기울기 a를 입력하시오: ");
    scanf("%lf", &a);

    printf("직선의 기울기 b를 입력하시오: ");
    scanf("%lf", &b);

    printf("상수항 c를 입력하시오: ");
    scanf("%lf", &c);

    printf("한 점의 x 좌표를 입력하시오: ");
    scanf("%lf", &x);

    printf("한 점의 y 좌표를 입력하시오: ");
    scanf("%lf", &y);

    distance = fabs(a * x + b * y + c) / sqrt(a * a + b * b);

    printf("d = |ax + by +c| / √ (a^2 + b^2)\n");
    printf("  = %.2lf\n", distance);

    return 0;
}
