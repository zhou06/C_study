#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int** p = (int**)malloc(3 * sizeof(int*));
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		p[i] = (int*)malloc(5 * sizeof(int));
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			p[i][j] = i * 5 + j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;

	return 0;
}