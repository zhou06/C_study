#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	double way = pow((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2), 0.5);
	printf("%.2lf", way);
	return 0;
}