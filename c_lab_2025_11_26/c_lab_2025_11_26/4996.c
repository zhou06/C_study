#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    double height = x;
    double rate = 1.001;

    for (int i = 0; i < n; i++)
    {
        height *= rate;
    }

    printf("%.4f\n", height);
    return 0;
}