#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main(void)
{
	int x = 0; //���� ����
	int money;
	int remainder;


	printf("���� �־��ּ���.:");
	scanf("%d", &x);

	money = 500 * x; //�� ���� ���� �� 
	printf("�־��� �ݾ���: %d\n", money);

	remainder = money % 500;

	if (money % 500 == 0)
	{
		printf("������� ���Խ��ϴ�.\n");

	}
	else if (money / 500 != 0)
	{

		printf("%d���� ��ȯ�Ǿ����ϴ�.\n", money);
	}
	else
	{

	}
	


	return 0;
}