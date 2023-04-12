#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	if(x > 0)
	{
		printf("절대값: %d", x);

	}
	else if(x < 0)
	{
		printf("절대값: %d", -x);
	}
	else
	{

	}
	
	
	return 0;

}