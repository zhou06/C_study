#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double x;
    scanf("%lf", &x);
    double r = x / 100.0;
    double p = pow(1.0 + r, 10.0);
    printf("%.5f\n", p);
    return 0;
}