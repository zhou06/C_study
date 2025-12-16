#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const int MOD = 998244353;

int main()
{
    long long a, n, d;
    scanf("%lld %lld %lld", &a, &n, &d);
    long long sum = (n * a + n * (n - 1) / 2 * d) % MOD;
    printf("%lld\n", sum);
    return 0;
}