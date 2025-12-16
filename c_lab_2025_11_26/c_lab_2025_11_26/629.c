#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long sum = 0,cur = 1;
	for (int i = 1; i <= n; i++)
	{
		cur *= i;
		sum += cur;
	}
	printf("%lld", sum);
	return 0;
}