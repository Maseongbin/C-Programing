#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	if (num%2==0)
	{
		printf("¦���Դϴ�.");
	}
	else
	{
		printf("Ȧ���Դϴ�.");
	}
	return 0;
}*/

int main()
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	switch (num % 2)
	{
	case 0:
		printf("¦���Դϴ�.");
		break;
	case 1:
		printf("Ȧ���Դϴ�.");
	}
	return 0;
}