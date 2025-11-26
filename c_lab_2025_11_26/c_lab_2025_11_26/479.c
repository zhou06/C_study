#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int hundreads = i / 100;
		int tens = (i / 10) % 10;
		int units = i % 10;
		int  sum = pow(hundreads, 3) + pow(tens, 3) + pow(units, 3);

		if (sum == i)
		{
			printf("%d\n", i);
		}

	}

	return 0;
}