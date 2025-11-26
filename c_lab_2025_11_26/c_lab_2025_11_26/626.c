#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 

int main()
{
    int n;
    scanf("%d", &n);

    int L = 0;          
    int temp_n = n;     

    if (temp_n == 0) 
    {
        L = 1;
    }
    else
    {
        
        while (temp_n > 0) 
        {
            L++;
            temp_n /= 10;
        }
    }
    printf("%d\n", L);

    temp_n = n; 
    
    int divisor = (int)pow(10, L - 1);

    for (int i = 0; i < L; i++) 
    {
        int digit = temp_n / divisor; 
        printf("%d ", digit);
        temp_n %= divisor;
        divisor /= 10;
    }
    printf("\n");

    temp_n = n;     
    int reversed_n = 0; 

    if (temp_n == 0)
    {
        reversed_n = 0;
    }
    else 
    {
        while (temp_n > 0) 
        {
            reversed_n = reversed_n * 10 + (temp_n % 10);
            temp_n /= 10;
        }
    }
    printf("%d\n", reversed_n);

    return 0;
}