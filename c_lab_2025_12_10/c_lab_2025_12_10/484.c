#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10];
	int i,j,minidx,temp;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &a[i]);
	}

	for (i = 0; i < 9; i++)
	{
		minidx = i;
		for (j = i + 1; j < 10; j++)
		{
			if (a[j] < a[minidx])
			{
				minidx = j;
			}
		}
		if (minidx != i)
		{
			temp = a[i];
			a[i] = a[minidx];
			a[minidx] = temp;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}