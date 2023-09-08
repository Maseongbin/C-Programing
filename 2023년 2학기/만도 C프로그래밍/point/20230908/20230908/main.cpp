#include <stdio.h>

int main(void)
{
	int num = 123;
	int* ptr = &num;
	printf("%d\n", *ptr);
	
	return 0;
};