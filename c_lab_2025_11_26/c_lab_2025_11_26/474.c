#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[4];
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
	for (int i = 0; i < 4-1; i++)
	{
		for (int j = 0; j < 4 - 1 - i; j++)
		{
			if (a[i] > a[i + 1])
			{
				int temp = a[i + 1];
				a[i+1] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}