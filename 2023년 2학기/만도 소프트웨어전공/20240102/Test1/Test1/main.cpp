#include <stdio.h>

int main()
{
	int n_arr[10] = { 1, 2, -1, -2, 1, 2, -1, -2, 1, 2 };

	int temp = 0;

	for (int i = 0; i < sizeof(n_arr) / sizeof(int); i++) // (10 * 4) / 4 = 10
	{
		temp += n_arr[i];
	}
	printf("°á°ú = %d", temp);

	return 0;
}