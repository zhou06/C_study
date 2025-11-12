#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, p;
	scanf("%d %d", &x, &p);
	double a = x * (p / 100.0);
	printf("%.2lf", a);
	return 0;
}