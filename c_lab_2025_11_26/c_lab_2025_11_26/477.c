#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, n;
	scanf("%d %d", &a, &n);
	int sum = 0;
	int cur = 0;
	for (int i = 1; i <= n; i++)
	{
		cur = cur * 10 + a;
		sum += cur;
	}
	printf("%d", sum);
	return 0;
}