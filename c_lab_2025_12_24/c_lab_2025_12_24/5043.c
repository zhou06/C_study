#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fun(int x, int n)
{
	double x1 = x;
	if (n == 1)
	{
		return x1 /( 1 + x1);
	}
	else if (n > 1)
	{
		return x1 / (n + fun(x, n - 1));
	}
}

int main()
{
	int x, n;
	scanf("%d %d", &x, &n);
	printf("%.2lf", fun(x, n));
	return 0;
}