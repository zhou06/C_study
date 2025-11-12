#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double money, m1, m2, m3;
	const double r1 = 0.35 / 100;
	const double r2 = 3.25 / 100;
	const double r3 = 3.05 / 100;
	scanf("%lf", &money);
	m1 = money * r1;
	m2 = money * r2;
	m3 = money * r3;

	printf("%.2lf\n", m1);
	printf("%.2lf\n", m2);
	printf("%.2lf\n", m3);
	return 0;
}