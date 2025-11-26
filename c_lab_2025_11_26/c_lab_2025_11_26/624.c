#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double F = 0;
	scanf("%lf", &F);
	double C = 5.0 / 9 * (F - 32);
	printf("%.6lf", C);
	return 0;
}