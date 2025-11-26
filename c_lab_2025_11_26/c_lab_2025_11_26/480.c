#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 0;
    double a = 2.0;
    double b = 1.0;

    for (int i = 0; i < n; i++)
    {
        sum += a / b;
        double temp = a;
        a = a + b;
        b = temp;
    }

    printf("%.2f\n", sum);

    return 0;
}