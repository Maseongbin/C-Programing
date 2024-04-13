#include <stdio.h>

union UNION
{
    float test;
    char mbyte[4];
};

int main()
{
    union UNION u;
    u.test = 123.456;

    printf("===================================\n");
    printf("mbyte[0] mbyte[0] mbyte[0] mbyte[0]\n");
    printf("  %d      %d       %d       %d\n", u.mbyte[0], u.mbyte[1], u.mbyte[2], u.mbyte[3]);
    printf("===================================\n\n");

    u.test = *((float*)u.mbyte);

    printf("%f\n", u.test);

    return 0;
}
