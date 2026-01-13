#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

int main()
{
    char s1[501], s2[501];

    while (scanf("%s %s", s1, s2) == 2)
    {
        int len1 = strlen(s1);
        int len2 = strlen(s2);

        if (len1 != len2)
        {
            printf("No\n");
            continue;
        }

        qsort(s1, len1, sizeof(char), cmp);
        qsort(s2, len2, sizeof(char), cmp);

        if (strcmp(s1, s2) == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}