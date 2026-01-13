#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, m, n;
    scanf("%d %d %d", &k, &m, &n);

    int arr[100];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d %d\n", arr[k - m], arr[n - 1]);

    return 0;
}