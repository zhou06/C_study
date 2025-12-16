#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fun(double x, int n)
{
	if (n == 0)
	{
		return x;
	}
	return 1 + 1 / fun(x, n - 1);
}

int main()
{
	double x = 0;
	int n = 10;
	for (int i = 1; i <= 20; i++)
	{
		x++;
		printf("%.6lf\n", fun(x, n));
	}
	return 0;
}