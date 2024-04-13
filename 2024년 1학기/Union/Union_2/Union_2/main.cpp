#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

union UNION
{
    float test;
    char mbyte[4];
};

int main()
{
    union UNION u;

    for (int i = 0; i < 4; i++)
    {
        printf("mbyte[%d]: ", i);
        scanf("%hhd", &u.mbyte[i]);
    }

    printf("%f\n", u.test);
    return 0;
}


