#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		count++;
		n = n& (n - 1);
	}
	printf("%d", count);
	return 0;
}