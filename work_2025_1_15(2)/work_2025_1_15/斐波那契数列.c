#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fib1(int x)
{
	if (x <= 2)
		return 1;
	else
		return Fib1(x - 1) + Fib1(x - 2);
}
int Fib2(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		b = c;
		a = c - a;
		x--;
	}
	return c;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("通过非递归求出，第%d个斐波那契数是:%d\n", x, Fib2(x));
	printf("通过递归求出，第%d个斐波那契数是:%d", x, Fib1(x));
	return 0;
}