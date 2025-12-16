#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int magic[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                magic[i][j] = 0;
            }
        }

        int row = 0;
        int col = n / 2;
        magic[row][col] = 1;

        for (int k = 2; k <= n * n; k++)
        {
            int new_row = row - 1;
            int new_col = col + 1;

            if (new_row < 0)
            {
                new_row = n - 1;
            }
            if (new_col >= n)
            {
                new_col = 0;
            }

            if (magic[new_row][new_col] != 0)
            {
                new_row = row + 1;
                new_col = col;
            }

            magic[new_row][new_col] = k;
            row = new_row;
            col = new_col;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d", magic[i][0]);
            for (int j = 1; j < n; j++)
            {
                printf(" %d", magic[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}