#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, x;
    int pos;
    int num;

    while (scanf("%d %d", &n, &x) != EOF)
    {
        pos = -1;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &num);
            if (pos == -1 && num == x)
            {
                pos = i;
            }
        }

        printf("%d\n", pos);
    }

    return 0;
}