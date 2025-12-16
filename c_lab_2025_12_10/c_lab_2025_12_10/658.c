#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    int flag[256];
    int i;

    while (scanf("%s %s", a, b) != EOF)
    {
        memset(flag, 0, sizeof(flag));

        for (i = 0; b[i] != '\0'; i++)
        {
            flag[(unsigned char)b[i]] = 1;
        }

        for (i = 0; a[i] != '\0'; i++)
        {
            if (flag[(unsigned char)a[i]] == 0)
            {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}