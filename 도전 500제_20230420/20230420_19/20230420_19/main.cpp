#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> 
#define TRUE 1
#define FALSE 0

void main()
{
    int a;
    int b;
    

    printf("ù��° ������ �Է��Ͻÿ�: ");
    scanf("%d", &a);

    printf("�ι�° ������ �Է��Ͻÿ�: ");
    scanf("%d", &b);



    if (a > b)
    {
        printf("�� �Դϴ�.\n");
    }
    else
    {
        printf("���� �Դϴ�.\n");
    }
}