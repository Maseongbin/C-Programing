#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x, y, distance, x2, y2;

    printf("ax + by + c = 0\n\n");
    printf("계수 a를 입력하세요: ");
    scanf("%f", &a);
    printf("계수 b를 입력하세요: ");
    scanf("%f", &b);
    printf("계수 c를 입력하세요: ");
    scanf("%f", &c);

    printf("점의 x 좌표를 입력하세요: ");
    scanf("%f", &x);
    printf("점의 y 좌표를 입력하세요: ");
    scanf("%f", &y);

    distance = fabs(a * x + b * y + c) / sqrt(a * a + b * b);

    x2 = x - a * (a * x + b * y + c) / (a * a + b * b);
    y2 = y - b * (a * x + b * y + c) / (a * a + b * b);

    printf("\n");
    printf("직선에서의 거리: %.2f\n", distance);
    printf("직선과 수직인 직선 위의 점: (%.2f, %.2f)\n", x2, y2);

    return 0;
}
