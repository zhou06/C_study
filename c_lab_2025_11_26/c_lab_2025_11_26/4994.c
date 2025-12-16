#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// 判断一个数是否为质数
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int num = 2;
    int result;

    // 遍历数字，统计质数，直到找到第n个
    while (count < n)
    {
        if (is_prime(num))
        {
            count++;
            result = num;
        }
        num++;
    }

    printf("%d\n", result);
    return 0;
}