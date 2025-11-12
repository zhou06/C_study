#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	double c, d;
	char e, f;
	scanf("%d %d %lf %lf %c %c", &a, &b, &c, &d, &e, &f);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%.2lf\n", c);
	printf("%.2lf\n", d);
	printf("%c\n", e);
	printf("%c\n", f);

	return 0;
}