#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define mod 998244353

long long fast_mod(long long a, long long b)
{
	long long ans = 1;
	a %= mod;
	while (b)
	{
		if (b % 2 == 1)
		{
			ans = (ans * a) % mod;
		}
		a = (a * a) % mod;
		b /= 2;
	}
	return ans;
}

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", fast_mod(a, b));
	return 0;
}