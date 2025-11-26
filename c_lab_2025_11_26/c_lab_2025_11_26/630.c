#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	float x = (-1) * b / (float)a;
	printf("%.6f", x);
	return 0;
}