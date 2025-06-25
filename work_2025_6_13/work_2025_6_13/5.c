#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average_sz(int x[], int n)
{
	int min = x[0];
	int sum = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (x[i] < min)
		{
			min = x[i];
		}
		sum += x[i];
	}
	sum -= min;
	double ave = (double)sum / (n - 1);
	return ave;
}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 10;
	double ave = average_sz(x, n);
	printf("%lf", ave);
	return 0;
}