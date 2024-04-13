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
    int temp;

    for (int i = 0; i < 4; i++)
    {
        printf("mbyte[%d]: ", i);
        scanf("%d", &temp);
        u.mbyte[i] = (char)temp;
    }

    printf("%f\n", u.test);
    return 0;
}


