#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double fun(double x, double a, double b, double c, double d, double e)
{
	return a * pow(x, 4) + b * pow(x, 3) + c * pow(x, 2) + d * x + e;
}

int main()
{
	double a, b, c, d, e;
	double x1, x2;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	scanf("%lf %lf", &x1, &x2);
	double left = x1, right = x2;
	double mid;

	while ((right - left) > 1e-12)
	{
		mid = (right + left) / 2.0;
		double f_mid = fun(mid, a, b, c, d, e);
		double f_left = fun(left, a, b, c, d, e);
		if (f_mid == 0 || f_mid * f_left < 0)
		{
			right = mid;
		}
		else
		{
			left = mid;
		}
	}
	printf("%.10lf\n", (left + right) / 2.0);

	return 0;
}