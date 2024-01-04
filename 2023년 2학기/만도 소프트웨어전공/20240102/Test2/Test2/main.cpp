#include <stdio.h>

int main()
{
	int dec = 17;
	int biny[20] = { 0, };
	int p = 0;

	for (;;)
	{
		biny[p] = dec % 2;
		dec = dec / 2;
		p++;
		if (dec == 0)
		{
			break;
		}
	}

	for (int i = p - 1; i >= 0; i--)
	{
		printf("%d", biny[i]);
	}

	return 0;
}