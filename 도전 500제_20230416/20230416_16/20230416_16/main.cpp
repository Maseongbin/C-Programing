#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main()

{

	float x, y, z;
	float min, max;

	printf("�� ���� �Ǽ��� �Է����ּ��� : ");

	scanf("%f %f %f", &x, &y, &z);

	if (x >= y) { max = x; min = y; }

	else { max = y; min = x; }

	if (z > max) max = z;

	if (z < min) min = z;

	printf("\n�� ���� �Ǽ� ��\n");

	printf("���� ū ���� %f�̰�,\n", max);

	printf("���� ���� ���� %f�Դϴ�. \n\n", min);

	return 0;

}