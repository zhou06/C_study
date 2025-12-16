#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, flag = 1;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += (1.0 / i) * flag;
		flag *= -1;
	}
	printf("%.5lf", sum);
	return 0;
}