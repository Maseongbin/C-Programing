#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	float score;
	printf("점수를 입력하시오 :");
	scanf("%f", &score);
	if (score >= 90)
	{
		printf("A\n");
	}
	else if (score >= 80)
	{
		printf("B\n");
	}
	else if (score >= 70)
	{
		printf("C\n");
	}
	else if (score >= 60)
	{
		printf("D\n");
	}
	else
	{
		printf("F");
	}
	return 0;
}
*/

int main()
{
	int score, a;


	printf("점수를 입력하시오 : ");
	scanf("%d", &score);

	a = score / 10;

	switch (a)
	{
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
	return 0;
}
