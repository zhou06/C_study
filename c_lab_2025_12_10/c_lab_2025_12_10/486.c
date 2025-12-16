#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 50

int main()
{
    int n, m;
    int matrix[MAX_SIZE][MAX_SIZE];
    int row_max[MAX_SIZE];
    int col_min[MAX_SIZE];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int max_val = matrix[i][0];
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > max_val)
            {
                max_val = matrix[i][j];
            }
        }
        row_max[i] = max_val;
    }

    for (int j = 0; j < m; j++)
    {
        int min_val = matrix[0][j];
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] < min_val)
            {
                min_val = matrix[i][j];
            }
        }
        col_min[j] = min_val;
    }

    // Ñ°ÕÒ°°µã
    int saddle_row = -1;
    int saddle_col = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == row_max[i] && matrix[i][j] == col_min[j])
            {
                if (saddle_row == -1 || (saddle_row == i && saddle_col > j))
                {
                    saddle_row = i;
                    saddle_col = j;
                }
            }
        }
    }

    if (saddle_row == -1)
    {
        printf("It does not exist!\n");
    }
    else
    {
        printf("%d %d %d\n", saddle_row, saddle_col, matrix[saddle_row][saddle_col]);
    }

    return 0;
}