#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int score = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A�����Դϴ�. ");

	}
	else if (score >= 80)
	{
		printf("B�����Դϴ�. ");

	}
	else if (score >= 70)
	{
		printf("C�����Դϴ�. ");

	}
	else if (score >= 60)
	{
		printf("D�����Դϴ�. ");

	}
	else
	{
		printf("F�����Դϴ�. ");

	}
	return 0;
}

