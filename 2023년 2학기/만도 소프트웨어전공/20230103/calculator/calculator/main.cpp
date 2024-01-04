#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897

int menu(void)
{
	int n;

	printf("\n");
	printf("=========================\n");
	printf("1. 더하기(+)\n");
	printf("2. 빼기(-)\n");
	printf("3. 곱하기(*)\n");
	printf("4. 나누기(/)\n");
	printf("5. 루트(√)\n");
	printf("6. 팩토리얼(!)\n");
	printf("7. 사인(sin)\n");
	printf("8. 종료\n");
	printf("=========================\n\n");

	printf("메뉴를 선택하시오: ");
	scanf("%d", &n);
	printf("\n");

	return n;
}

void add()
{
	double num1, num2, num3 = 0;
	
	printf("첫번째 수 입력: ");
	scanf("%lf", &num1);

	printf("두번째 수 입력: ");
	scanf("%lf", &num2);

	num3 = num1 + num2;

	printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num3);
}

void sub()
{
	double num1, num2, num3 = 0;
	
	printf("첫번째 수 입력: ");
	scanf("%lf", &num1);

	printf("두번째 수 입력: ");
	scanf("%lf", &num2);

	num3 = num1 - num2;

	printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num3);
}

void mul()
{
	double num1, num2, num3 = 0;
	
	printf("첫번째 수 입력: ");
	scanf("%lf", &num1);

	printf("두번째 수 입력: ");
	scanf("%lf", &num2);

	num3 = num1 * num2;

	printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num3);
}

void div()
{
	double num1, num2, num3 = 0;
	
	printf("첫번째 수 입력: ");
	scanf("%lf", &num1);

	printf("두번째 수 입력: ");
	scanf("%lf", &num2);

	num3 = num1 / num2;

	printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num3);
}

void root()
{
	double num = 0;
	
	printf("수를 입력하시오: ");
	scanf("%lf", &num);

	double result = sqrt(num);
	printf("√%lf = %lf\n", num, result);
}

void factorial()
{
	double n = 0;
	double result = 1;
	
	printf("정수를 입력하시오: ");
	scanf("%lf", &n);

	for (int i = 1; i <= n; i++)
	{
		result = result * i;
	}

	printf("%.2lf!은 %.2lf입니다.\n", n, result);
}

void sine()
{
	double angle = 0;
	double result = 0;

	printf("각도를 입력하시오: ");
	scanf("%lf", &angle);

	result = angle * (PI / 180);
	printf("sin(%.2lf) = %.2lf\n", angle, sin(result));
}

void finish()
{
	printf("이용해주셔서 감사합니다.\n");
}

int main(void)
{
	while (1)
	{
		switch (menu())
		{
		case 1:
			add();
			break;

		case 2:
			sub();
			break;

		case 3:
			mul();
			break;

		case 4:
			div();
			break;

		case 5:
			root();
			break;

		case 6:
			factorial();
			break;

		case 7:
			sine();
			break;

		case 8:
			finish();
			return 0;
		}
	}
}

