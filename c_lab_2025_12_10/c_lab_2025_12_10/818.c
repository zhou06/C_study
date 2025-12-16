#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if (n <= 0) 
    {
        return 0;
    }
    unsigned long long* fib = (unsigned long long*)malloc(n * sizeof(unsigned long long));
    fib[0] = 0;
    if (n > 1) 
    {
        fib[1] = 1;
        for (int i = 2; i < n; i++) 
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%llu\n", fib[i]);
    }
    free(fib);
    return 0;
}
