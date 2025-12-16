#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const int MOD = 998244353;

int main()
{
    int n;
    scanf("%d", &n);

    long long fact = 1;   
    long long sum = 0;    

    for (int i = 1; i <= n; i++)
    {
        fact = (fact * i) % MOD;  
        sum = (sum + fact) % MOD;
    }

    printf("%lld\n", sum);
    return 0;
}