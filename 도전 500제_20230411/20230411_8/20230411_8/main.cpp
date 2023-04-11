#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main(void)
{
	int x = 0; //돈의 개수
	int money;
	int remainder;


	printf("돈을 넣어주세요.:");
	scanf("%d", &x);

	money = 500 * x; //총 넣은 돈의 값 
	printf("넣어진 금액은: %d\n", money);

	remainder = money % 500;

	if (money % 500 == 0)
	{
		printf("음료수가 나왔습니다.\n");

	}
	else if (money / 500 != 0)
	{

		printf("%d원이 반환되었습니다.\n", money);
	}
	else
	{

	}
	


	return 0;
}