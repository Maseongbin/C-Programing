#include<stdio.h>

int main(void)
{

	int i = 2000000000;

	int j = 3000000000;


	printf("i: %d\n", i);
	printf("j: %d\n", j);

	return 0;

}

//int는 4바이트(32비트)까지만 저장할 수 있어서 4바이트를 넘어가는 3000000000는 나오지 않는다.