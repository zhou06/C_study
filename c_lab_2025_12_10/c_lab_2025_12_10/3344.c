#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10001];
    int cnt = 0;
    char c;

    while (1)
    {
        scanf("%d", &arr[cnt]);
        cnt++;
        c = getchar();
        if (c == '\n')
        {
            break;
        }
    }

    int x;
    scanf("%d", &x);

    int pos = cnt;
    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] > x)
        {
            pos = i;
            break;
        }
    }

    for (int i = cnt; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    cnt++;

    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}