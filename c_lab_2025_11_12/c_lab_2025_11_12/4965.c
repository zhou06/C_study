#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &k);
    n = 1;
    double sum = 0;
    while (1)
    {
        sum += 1.0 / n;
        if (sum > k)
        {
            printf("%d", n);
            break;
        }
        else
        {
            n++;
        }
    }
    return 0;
}