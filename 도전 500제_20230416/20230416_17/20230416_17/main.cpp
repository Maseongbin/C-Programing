#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>


int main(void)
{

	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float e = 0;
	float x = 0;
	float average = 0;



	printf("5개의 실수를 입력하시오.: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	x = a + b + c + d + e;
	printf("합: %f", x);
	average = x / 5;
	printf("평균: %f", average);

	return 0;
}