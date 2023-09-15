#include<stdio.h>

/*
int ReturnPlusOne(int n) 
{
	return n + 1;
}

int main(void) 
{
	int number = 3;

	printf("%d\n", number);
	number = 5;
	printf("%d\n", number);
	number = ReturnPlusOne(number);
	printf("%d\n", number);

	return 0;
}
*/

/*
void ChangePlusOne(int n) 
{
	n += 1;
}

int main(void) 
{
	int number = 3;

	printf("%d\n", number);
	number = 5;
	printf("%d\n", number);
	ChangePlusOne(number);
	printf("%d\n", number);

	return 0;
}
*/

void ChangePlusOne(int* n)
{
	*n += 1;
}

int main(void)
{
	int number = 3;
	printf("%d\n", number);

	number = 5;
	printf("%d\n", number);

	ChangePlusOne(&number);
	printf("%d\n", number);

	return 0;
}