#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int check(char* s1, char* s2)
{
    int exist1[256] = { 0 };
    int exist2[256] = { 0 };
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        exist1[s1[i]] = 1;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        exist2[s2[i]] = 1;
    }

    for (i = 0; i < 256; i++)
    {
        if (exist1[i] != exist2[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str1[1000], str2[1000];

    while (scanf("%s %s", str1, str2) != EOF)
    {
        if (check(str1, str2))
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