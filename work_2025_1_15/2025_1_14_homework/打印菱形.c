#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int i = 0;
	int j = 0;
	for (i = 1; i <= 7 ; i++)
	{
		for (j = i; j < 7; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i >= 1; i--)
	{
		for (j = 7; j > i; j--)
		{
			printf(" ");
		}
		for (j = (2 * i) - 1;j >= 1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}