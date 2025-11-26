#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d",& a, &b, &c);
	float a1, b1, c1;
	a1 = a;
	b1 = b;
	c1 = c;
	if (b*b - 4 * a * c < 0)
	{
		printf("NO");
	}
	else if (b*b - 4*a*c == 0)
	{
		int x = (b * (-1) + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		float x1 = (b1 * (-1) + pow(b1 * b1 - 4 * a1 * c1, 0.5)) / (2 * a1);
		if (x == x1)
		{
			printf("%d", x);
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		int x1 = (b * (-1) + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		int x2 = (b * (-1) - pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		float x3 = (b1 * (-1) + pow(b1 * b1 - 4 * a1 * c1, 0.5)) / (2 * a1);
		float x4 = (b1 * (-1) - pow(b1 * b1 - 4 * a1 * c1, 0.5)) / (2 * a1);
		if (x1 == x3 && x2 == x4)
		{
			if (x1 > x2)
			{
				printf("%d %d",x2,x1);
			}
			else
			{
				printf("%d %d", x1, x2);
			}
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}