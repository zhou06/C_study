#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const int MOD = 998244353;

// 快速幂：计算 (base^exponent) mod MOD
long long qpow(long long base, long long exponent) 
{
    long long result = 1;
    base %= MOD; // 先取模，避免溢出
    while (exponent > 0) 
    {
        if (exponent % 2 == 1) 
        {
            result = (result * base) % MOD; // 奇数项乘入结果
        }
        base = (base * base) % MOD; // 底数平方
        exponent /= 2; // 指数减半
    }
    return result;
}

int main() 
{
    long long a, n, q;
    scanf("%lld %lld %lld", &a, &n, &q);

    if (q == 1) 
    {
        // 情况1：公比为1，和 = a * n
        long long sum = (a % MOD) * (n % MOD) % MOD;
        printf("%lld\n", sum);
    }
    else 
    {
        // 情况2：公比≠1，和 = a*(q^n - 1)/(q-1)
        long long q_pow_n = qpow(q, n); // 计算q^n mod MOD
        long long numerator = (q_pow_n - 1 + MOD) % MOD; // 避免q^n-1为负
        numerator = (numerator * (a % MOD)) % MOD; // 分子：a*(q^n - 1) mod MOD

        long long denominator = (q - 1) % MOD; // 分母：q-1
        long long inv_denominator = qpow(denominator, MOD - 2); // 分母的逆元

        long long sum = (numerator * inv_denominator) % MOD; // 总和取模
        printf("%lld\n", sum);
    }
    return 0;
}
