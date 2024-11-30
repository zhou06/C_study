#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j * j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}

	return 0;
}