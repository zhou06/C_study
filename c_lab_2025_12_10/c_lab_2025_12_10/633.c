#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n < 2 || n > 1000)
        {
            continue;
        }
        int numbers[1000];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &numbers[i]);
        }

        int max1 = -2147483648, max2 = -2147483648;
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] > max1)
            {
                max2 = max1;
                max1 = numbers[i];
            }
            else if (numbers[i] > max2)
            {
                max2 = numbers[i];
            }
        }

        printf("%d %d\n", max1, max2);
    }

    return 0;
}