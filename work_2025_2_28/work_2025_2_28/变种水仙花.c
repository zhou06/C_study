#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 10000; i <= 99999; i++)
    {
        int sum = 0;
        int d = 10;
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            int a = i / d;
            int b = i % d;
            sum += a * b;
            d *= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}