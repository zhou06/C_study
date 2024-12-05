#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i;
		int j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else if (j == (n - i - 1))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}