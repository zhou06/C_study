#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    // 计算1到n的和
    long long sum = (long long)n * (n + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}