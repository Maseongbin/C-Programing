#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
int main()
{
    char s1[10];   

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", s1);     

    printf("%s\n", s1);  

    return 0;
}
*/

int main()
{
    char s1[30];

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]s", s1);   

    printf("%s\n", s1);
}