#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_sz(int x[], int n)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < n; i += 2)
	{
		sum += x[i];
	}
	return sum;
}

int main()
{	
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int sum = sum_sz(x, n);
	printf("%d", sum);
	return 0;
}