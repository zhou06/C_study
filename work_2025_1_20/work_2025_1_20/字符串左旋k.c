#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void zuoxuan(char* str, int k) 
{
    int len = strlen(str);
    char temp[100];
    for (int i = 0; i < k; i++) 
    {
        temp[i] = str[i];
    }
    for (int i = 0; i < len - k; i++) 
    {
        str[i] = str[i + k];
    }
    for (int i = len - k, j = 0; i < len; i++, j++) 
    {
        str[i] = temp[j];
    }
}


int main() {
    char str[] = "ABCD";
    int k = 0;
    scanf("%d", &k);
    zuoxuan(str, k);
    printf("%s\n", str);
    return 0;
}