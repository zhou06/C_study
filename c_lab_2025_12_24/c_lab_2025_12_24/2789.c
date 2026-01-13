#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long Gcd(long long a, long long b)
{
	while (b != 0)
	{
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long  long gcd = Gcd(a, b);
	long long lcm = (a * b) / gcd;
	printf("%lld %lld", gcd, lcm);
	return 0;
}