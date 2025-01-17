#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DigitSum(int n)
{
	int a = n % 10;
	int sum = a;
	if(n > 9)
	{
		n /= 10;
		sum += DigitSum(n);
	}
	return sum;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d各位数字之和为%d", n, DigitSum(n));
	return 0;
}