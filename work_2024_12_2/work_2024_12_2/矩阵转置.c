#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int arr[10][10];
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}