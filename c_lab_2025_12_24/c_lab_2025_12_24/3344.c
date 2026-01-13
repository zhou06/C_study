#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10000];
    int count = 0;
    int num;

    while (1)
    {
        char c;
        scanf("%d", &num);
        arr[count++] = num;
        scanf("%c", &c);
        if (c == '\n')
        {
            break;
        }
    }

    int x;
    scanf("%d", &x);

    int i;
    for (i = 0; i < count; i++)
    {
        if (arr[i] > x)
        {
            break;
        }
    }

    for (int j = count; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = x;
    count++;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}