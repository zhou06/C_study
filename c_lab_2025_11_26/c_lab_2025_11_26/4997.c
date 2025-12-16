#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int count = 0;
    for (int x = 0; x * a <= c; x++)
    {
        int rem = c - x * a;
        if (rem % b == 0 && rem >= 0)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}