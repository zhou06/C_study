#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max, num;
    scanf("%d", &max);
    for (int i = 1; i < n; i++) 
    {
        scanf("%d", &num);
        if (num > max) 
        {
            max = num;
        }
    }

    printf("%d\n", max);
    return 0;
}