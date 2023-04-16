#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main()

{

	float x, y, z;
	float min, max;

	printf("세 개의 실수를 입력해주세요 : ");

	scanf("%f %f %f", &x, &y, &z);

	if (x >= y) { max = x; min = y; }

	else { max = y; min = x; }

	if (z > max) max = z;

	if (z < min) min = z;

	printf("\n세 개의 실수 중\n");

	printf("가장 큰 수는 %f이고,\n", max);

	printf("가장 작은 수는 %f입니다. \n\n", min);

	return 0;

}