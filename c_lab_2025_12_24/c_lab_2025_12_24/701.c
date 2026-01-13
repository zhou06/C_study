#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[10][10];
    int unique[100];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int found = 0;
            for (int k = 0; k < count; k++)
            {
                if (unique[k] == matrix[i][j])
                {
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                unique[count] = matrix[i][j];
                count++;
            }
        }
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (unique[j] > unique[j + 1])
            {
                int temp = unique[j];
                unique[j] = unique[j + 1];
                unique[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", unique[i]);
    }
    printf("\n");

    return 0;
}