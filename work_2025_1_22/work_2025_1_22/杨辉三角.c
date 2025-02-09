#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10
int main()
{
	int arr[N][N] = {0};
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		arr[i][0] = 1;	// 每行首元素为1
		for (j = 0; j <= i; j++)
		{
			if (i == j)
				arr[i][j] = 1;	// 每行末位为1
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}