#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Fraction
{
    int num;
    int den;
};

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
    struct Fraction f = { 24, 64 };
    int gcd_val = gcd(f.num, f.den);
    f.num /= gcd_val;
    f.den /= gcd_val;
    printf("%d/%d\n", f.num, f.den);
    return 0;
}