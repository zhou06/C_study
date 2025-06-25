#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_sz(int x[], int n)
{	
	int i = 0;
	int max = x[0];
	for (i = 0; i < n; i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
	}
	return max;
}

int main()
{
	int x[10] = { 1,2,3,6,7,4,3,8,1,9 };
	int n = 10;
	int max = max_sz(x, n);
	printf("%d", max);
	return 0;
}