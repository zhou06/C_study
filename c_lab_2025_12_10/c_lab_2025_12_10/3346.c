#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[1000][1000];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int count = 0;

    int row_max[1000];
    int col_min[1000];

    for (int i = 0; i < n; i++)
    {
        row_max[i] = mat[i][0];
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] > row_max[i])
            {
                row_max[i] = mat[i][j];
            }
        }
    }

    for (int j = 0; j < m; j++)
    {
        col_min[j] = mat[0][j];
        for (int i = 1; i < n; i++)
        {
            if (mat[i][j] < col_min[j])
            {
                col_min[j] = mat[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == row_max[i] && mat[i][j] == col_min[j])
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}