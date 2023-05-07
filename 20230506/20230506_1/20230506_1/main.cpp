#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int num;
	printf("정수를 입력하시요 : ");
	scanf("%d", &num);
	if (num%2==0)
	{
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수입니다.");
	}
	return 0;
}*/

int main()
{
	int num;

	printf("정수를 입력하시요 : ");
	scanf("%d", &num);

	switch (num % 2)
	{
	case 0:
		printf("짝수입니다.");
		break;
	case 1:
		printf("홀수입니다.");
	}
	return 0;
}