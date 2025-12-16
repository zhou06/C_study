#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000
#include <stdio.h>

int a[MAX];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum = 1;
	int max = 1;
	int result = max;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= a[i + 1])
			sum++;
		else
		{
			max = sum;
			if (max > result)
				result = max;
			sum = 1;
		}
	}
	if (max > result)
		result = max;
	printf("%d", result);
	return 0;
}