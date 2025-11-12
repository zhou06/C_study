#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double sum = 0;
	int n;
	int flag = 1;	// ·ûºÅ
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / i * flag;
		flag *= -1;
	}
	printf("%.5lf", sum);
	return 0;
}