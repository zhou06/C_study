#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort_sz(int x[],int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (x[j] > x[j + 1])
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int x[10] = { 10,2,3,6,4,7,1,8,5,9 };
	int n = 10;
	sort_sz(x, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
	return 0;
}