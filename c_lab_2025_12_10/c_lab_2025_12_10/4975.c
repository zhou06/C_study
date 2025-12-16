#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long k;
	scanf("%lld", &k);
	int x = 0;
	while (k)
	{
		x += k % 10;
		k /= 10;
	}
	printf("%d", x);
	return 0;
}