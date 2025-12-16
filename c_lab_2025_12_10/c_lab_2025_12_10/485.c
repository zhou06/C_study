#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int tri[20][20];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) 
            {
                tri[i][j] = 1;
            }
            else 
            {
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i; j++) 
        {
            printf("%d", tri[i+j][i]);
            if (j < n-i-1) 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}