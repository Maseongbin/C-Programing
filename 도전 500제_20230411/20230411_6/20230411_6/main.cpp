#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int age = 0;

	printf("나이가 몇살 인가요?\n");
	scanf("%d", &age);

	if (age < 20)
	{

		printf("30%%를 할인");
	}
	else
	{

	}

	return 0;
}