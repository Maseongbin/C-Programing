#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	if(x > 0)
	{
		printf("���밪: %d", x);

	}
	else if(x < 0)
	{
		printf("���밪: %d", -x);
	}
	else
	{

	}
	
	
	return 0;

}