#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r;
	scanf("%d", &r);
	const double pi = 3.14;
	double s = pi * r * r;
	printf("%.2lf", s);
	return 0;
}