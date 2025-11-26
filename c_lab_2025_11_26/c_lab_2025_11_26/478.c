#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long fac(int n)
{
	if (n < 0)
		return -1;
	long long result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	int n;
	scanf("%d", &n);
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += fac(i);
	}
	printf("%lld", sum);
	return 0;
}