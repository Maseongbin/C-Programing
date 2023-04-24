#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> 
#define TRUE 1
#define FALSE 0

void main()
{
    int a;
    int b;
    

    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &a);

    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &b);



    if (a > b)
    {
        printf("참 입니다.\n");
    }
    else
    {
        printf("거짓 입니다.\n");
    }
}