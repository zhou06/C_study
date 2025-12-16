#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k;
	scanf("%d", &k);
	int n = 1;
	double sum = 0;
	while (1)
	{
		sum += 1.0 / n;
		if (sum > k)
		{
			printf("%d", n);
			break;
		}
		n++;
	}
	return 0;
}