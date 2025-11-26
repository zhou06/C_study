#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
	return a;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int g = gcd(a, b);
    int l = a * b / g;
    printf("%d %d", g, l);
	return 0;
}