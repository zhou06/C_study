#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPalindrome(int x)
{
    int original = x;
    int reversed = 0;
    while (x > 0)
    {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }
    return original == reversed;
}

int isPrime(int x)
{
    if (x <= 1)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;
    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);
    int num = N + 1;
    while (1)
    {
        if (isPalindrome(num) && isPrime(num))
        {
            printf("%d", num);
            break;
        }
        num++;
    }
    return 0;
}