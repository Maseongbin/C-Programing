#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int score = 0;

	printf("점수를 입력하시오: ");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A학점입니다. ");

	}
	else if (score >= 80)
	{
		printf("B학점입니다. ");

	}
	else if (score >= 70)
	{
		printf("C학점입니다. ");

	}
	else if (score >= 60)
	{
		printf("D학점입니다. ");

	}
	else
	{
		printf("F학점입니다. ");

	}
	return 0;
}

