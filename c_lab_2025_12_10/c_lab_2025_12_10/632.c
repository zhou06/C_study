#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int numbers[10];
    int i, j, k;
    int current_index = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }

        for (k = 0; k < i; k++)
        {
            printf("%d", numbers[current_index]);
            current_index++;

            if (k < i - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}