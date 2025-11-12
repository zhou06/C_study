#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	double x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (b * b - 4 * a * c < 0)
	{
		printf("No real root\n");
	}
	else
	{
		x1 = (-b + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		x2 = (-b - pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		if (x1 < x2)
		{
			float temp = x1;
			x1 = x2;
			x2 = temp;
		}
		printf("%.4f\n", x1);
		printf("%.4f\n", x2);
	}
	return 0;
}