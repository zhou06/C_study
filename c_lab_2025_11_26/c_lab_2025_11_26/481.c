#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int peaches = 1;

    for (int i = 0; i < n - 1; i++) 
    {
        peaches = (peaches + 1) * 2;
    }

    printf("%d\n", peaches);

    return 0;
}
