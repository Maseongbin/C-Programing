#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    double a = 0;
    double b = 0;
    double c = 0;

    printf("3개의 실수를 입력해주세요.; "); 
    scanf("%lf %lf %lf", &a, &b, &c);      


    if (a > b && a > c)   printf("가장 큰 수는 %lf 입니다.", a);

    else if (b > a && b > c)    printf("가장 큰 수는 %lf 입니다.", b);

    else if (c > a && c > b)    printf("가장 큰 수는 %lf 입니다.", c);

    if (a < b && a < c)   printf("가장 작은 수는 %lf 입니다.", a);

    else if (b < a && b < c)    printf("가장 작은 수는 %lf 입니다.", b);

    else if (c < a && c < b)    printf("가장 작은 수는 %lf 입니다.", c);


    return 0;
}
