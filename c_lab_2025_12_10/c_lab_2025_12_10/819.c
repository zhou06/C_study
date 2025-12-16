#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int x = 0; x < n; x++)
    {
        printf("%d", a[0][n - 1 - x]);
        for (int y = 1; y < n; y++)
        {
            printf(" %d", a[y][n - 1 - x]);
        }
        printf("\n");
    }

    return 0;
}