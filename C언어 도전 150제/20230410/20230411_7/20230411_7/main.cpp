#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	double sensible_temperature1;
	double sensible_temperature2;

	printf("���ϰ� ���� ���� ���ְ�ü���µ�.: ");
	scanf("%lf %lf", &sensible_temperature1, &sensible_temperature2);

	if (33 <= sensible_temperature1 && sensible_temperature2 < 35)
	{
		
		printf("���� ���Ǻ� �߷�\n");
	}
	else if (sensible_temperature1 && sensible_temperature2 > 35)
	{

		printf("���� �溸 �߷�\n");
	}
	else
	{

	}
}