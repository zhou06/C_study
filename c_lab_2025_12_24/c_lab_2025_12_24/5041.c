#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int perfect[10000];

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            perfect[count] = i;
            count++;
        }
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", perfect[i]);
    }
    printf("\n");

    return 0;
}