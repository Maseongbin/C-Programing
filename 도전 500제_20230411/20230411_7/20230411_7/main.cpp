#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	double sensible_temperature1;
	double sensible_temperature2;

	printf("내일과 모래의 예상 일최고체감온도.: ");
	scanf("%lf %lf", &sensible_temperature1, &sensible_temperature2);

	if (33 <= sensible_temperature1 && sensible_temperature2 < 35)
	{
		
		printf("폭염 주의보 발령\n");
	}
	else if (sensible_temperature1 && sensible_temperature2 > 35)
	{

		printf("폭염 경보 발령\n");
	}
	else
	{

	}
}