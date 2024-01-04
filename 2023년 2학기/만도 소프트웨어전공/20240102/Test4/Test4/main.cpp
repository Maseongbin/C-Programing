#include <stdio.h>

int main()
{
	int test_arr[10][10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
			{
				test_arr[i][j] = i;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 10; j > 0; j--)
		{
			if (i == j)
			{
				test_arr[i][j] = i;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%4d", test_arr[i][j]);
		}
	}
}