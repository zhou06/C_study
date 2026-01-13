#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int is_saddle = 1;

            for (int k = 0; k < m; k++)
            {
                if (arr[i][k] > arr[i][j])
                {
                    is_saddle = 0;
                    break;
                }
            }

            if (is_saddle)
            {
                for (int k = 0; k < n; k++)
                {
                    if (arr[k][j] < arr[i][j])
                    {
                        is_saddle = 0;
                        break;
                    }
                }
            }

            if (is_saddle)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}