#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n, x;
    while (scanf("%d %d", &n, &x) != EOF)
    {
        int a[1000];
        int b[1000];
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] >= x)
            {
                b[cnt++] = a[i];
            }
        }

        qsort(b, cnt, sizeof(int), compare);

        for (int i = 0; i < cnt; i++)
        {
            if (i > 0)
            {
                printf(" ");
            }
            printf("%d", b[i]);
        }
        printf("\n");
    }

    return 0;
}