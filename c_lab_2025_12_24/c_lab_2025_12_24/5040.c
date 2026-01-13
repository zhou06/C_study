#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    double result = sqrt(1.0 + x);

    for (int i = 2; i <= n; i++)
    {
        result = sqrt(i + result);
    }

    printf("%.2lf\n", result);

    return 0;
}