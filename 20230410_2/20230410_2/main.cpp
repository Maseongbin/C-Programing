#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main(void)
{
	int x = 1.0;
	float y = M_PI;
	float z = x + y;

	printf("%.6f", z);

	return 0;

}