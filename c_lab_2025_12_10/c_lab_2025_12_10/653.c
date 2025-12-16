#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[1002];  
    int is_first = 1; 

    while (scanf("%s", str) != EOF)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            str[i] += 1;
        }

        int num = atoi(str);

        if (is_first)
        {
            printf("%d",num);
            is_first = 0;
        }
        else
        {
            printf(" %d",num);
        }
    }

    return 0;
}