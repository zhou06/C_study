#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;
	char op;
	scanf("%lf%c%lf", &a, &op, &b);
	if (op == '+')
	{
		double c = a + b;
		printf("%.7lf\n", c);
	}
	else
	{
		double c = a - b;
		printf("%.7lf\n", c);
	}
	return 0;
}