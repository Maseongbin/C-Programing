#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int x;
	int y;

	printf("x의 값을 입력하시오.: ");
	scanf("%d", &x);

	printf("y의 값을 입력하시오.: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x값이 y의 값보다 큽니다.");
	}
	else
	{
		printf("x의 값이 y의 값보다 작습니다.");
	}

	return 0;
}