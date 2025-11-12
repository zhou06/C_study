#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	double a;
	double b = x / 100.0;
	a = pow((1 + b), y);
	printf("%.2lf",a);
	return 0;
}