#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_max(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int num = get_max(a, b);
	printf("%d", num);

	return 0;
}