#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (m < n)
	{
		printf("No\n");
	}
	else
	{
		if (m % n == 0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}