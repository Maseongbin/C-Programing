#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int cm = 0;
	int ft = 0;
	double inch;
	
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &cm);

	inch = cm / 2.54;
	ft = inch / 12;
	inch = inch - ft * 12;

	printf("%dcm�� %d��Ʈ %.2lf��ġ�Դϴ�.", cm, ft, inch);

	return 0;


}

