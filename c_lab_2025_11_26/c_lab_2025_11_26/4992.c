#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    // 222的所有正因子
    int factors[] = { 1, 2, 3, 6, 37, 74, 111, 222 };
    int L, R;
    scanf("%d %d", &L, &R);
    long long sum = 0; // 避免和过大溢出

    for (int x = L; x <= R; x++) 
    {
        // 检查是否是222的因子
        int is_factor = 0;
        for (int i = 0; i < 8; i++) 
        {
            if (x == factors[i]) 
            {
                is_factor = 1;
                break;
            }
        }
        // 检查是否是222的倍数
        int is_multiple = (x % 222 == 0);

        // 满足任一条件则累加
        if (is_factor || is_multiple) 
        {
            sum += x;
        }
    }

    printf("%lld\n", sum);
    return 0;
}