#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int fun(char* s) 
{
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) 
    {
        sum += s[i] - '0';
    }
    return sum;
}

int main() 
{
    char x[1000];
    scanf("%s", x);
    int ans = fun(x);
    while (ans >= 10) 
    {
        char temp[10];
        sprintf(temp, "%d", ans);
        ans = fun(temp);
    }
    printf("%d\n", ans);
    return 0;
}