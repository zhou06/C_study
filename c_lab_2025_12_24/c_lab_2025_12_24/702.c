#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double distance = 0.0;
    int time = 0;

    while (distance < n)
    {
        time++;
        distance += 1.0 / time;
    }

    printf("%d\n", time);

    return 0;
}