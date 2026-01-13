#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    int fee;

    if (w <= 5)
    {
        fee = w * 2;
    }
    else
    {
        fee = 5 * 2 + (w - 5) * 3;
    }

    printf("%d\n", fee);
    return 0;
}