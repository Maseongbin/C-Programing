#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void min_max(int* a, int* b, int* c, int* max, int* min) 
{
    if (*a < *b)
    {
        if (*c < *b && *c < *a)
        {
            *max = *b;
            *min = *c;
        }
        else if (*c < *b && *c > *a)
        {
            *max = *b;
            *min = *a;
        }
        else if (*c > *b)
        {
            *max = *c;
            *min = *a;
        }
        else
        {

        }
    }
    else if(*a > *b)
    {
        if (*a > *c && *c > *b)
        {
            *max = *a;
            *min = *b;
        }
        else if (*a > *c && *c < *b)
        {
            *max = *a;
            *min = *c;
        }
        else if (*c > *a)
        {
            *max = *c;
            *min = *b;
        }
        else
        {

        }
    }
    else
    {

    }
}

int main() 
{
    int num1, num2, num3, max, min;

    printf("세 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    min_max(&num1, &num2, &num3, &max, &min);

    printf("최솟값: %d\n", min);
    printf("최댓값: %d\n", max);

    return 0;
}