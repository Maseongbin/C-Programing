#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897

int menu(void)
{
	int n;

	printf("\n");
	printf("=========================\n");
	printf("1. ���ϱ�(+)\n");
	printf("2. ����(-)\n");
	printf("3. ���ϱ�(*)\n");
	printf("4. ������(/)\n");
	printf("5. ��Ʈ(��)\n");
	printf("6. ���丮��(!)\n");
	printf("7. ����(sin)\n");
	printf("8. ����\n");
	printf("=========================\n\n");

	printf("�޴��� �����Ͻÿ�: ");
	scanf("%d", &n);
	printf("\n");

	return n;
}

void add()
{
	double num1, num2, num3 = 0;
	
	printf("ù��° �� �Է�: ");
	scanf("%lf", &num1);

	printf("�ι�° �� �Է�: ");
	scanf("%lf", &num2);

	num3 = num1 + num2;

	printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num3);
}

void sub()
{
	double num1, num2, num3 = 0;
	
	printf("ù��° �� �Է�: ");
	scanf("%lf", &num1);

	printf("�ι�° �� �Է�: ");
	scanf("%lf", &num2);

	num3 = num1 - num2;

	printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num3);
}

void mul()
{
	double num1, num2, num3 = 0;
	
	printf("ù��° �� �Է�: ");
	scanf("%lf", &num1);

	printf("�ι�° �� �Է�: ");
	scanf("%lf", &num2);

	num3 = num1 * num2;

	printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num3);
}

void div()
{
	double num1, num2, num3 = 0;
	
	printf("ù��° �� �Է�: ");
	scanf("%lf", &num1);

	printf("�ι�° �� �Է�: ");
	scanf("%lf", &num2);

	num3 = num1 / num2;

	printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num3);
}

void root()
{
	double num = 0;
	
	printf("���� �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	double result = sqrt(num);
	printf("��%lf = %lf\n", num, result);
}

void factorial()
{
	double n = 0;
	double result = 1;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &n);

	for (int i = 1; i <= n; i++)
	{
		result = result * i;
	}

	printf("%.2lf!�� %.2lf�Դϴ�.\n", n, result);
}

void sine()
{
	double angle = 0;
	double result = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &angle);

	result = angle * (PI / 180);
	printf("sin(%.2lf) = %.2lf\n", angle, sin(result));
}

void finish()
{
	printf("�̿����ּż� �����մϴ�.\n");
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

