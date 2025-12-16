#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
    char x[12];
    int n;
    while (scanf("%s %d", x, &n) != EOF) 
    {
        int len = strlen(x);
        n = n % len;

        char temp[12];
        strcpy(temp, x + n);     
        strncat(temp, x, n);   
        temp[len] = '\0';

        printf("%s\n", temp);
    }
    return 0;
}