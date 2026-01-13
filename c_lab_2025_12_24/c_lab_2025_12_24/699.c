#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		if (i == 1)
		{
			printf("*");
			for (int j = n; j < 2 * n - 1; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
		else if (i == n)
		{
			for (int j = 1; j <= 2 * n - 1; j++)
			{
				if (j % 2 == 1)
					printf("*");
				else
					printf(" ");
			}
		}
		else
		{
			printf("*");
			for (int j = n + 1 - i; j < n - 2 + i; j++)
			{
				printf(" ");
			}
			printf("*");
			for (int j = n - 1 + i; j < 2 * n - 1; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}