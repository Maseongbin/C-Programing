#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m, rand_num;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    srand(time(NULL));
    rand_num = rand() % (m - n + 1) + n;

    printf("n���� m������ ����: %d\n", rand_num);


}
