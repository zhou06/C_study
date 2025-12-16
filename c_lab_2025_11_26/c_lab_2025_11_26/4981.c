#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x >= 0)
		printf("%d", x);
	else
		printf("%d", x * (-1));

	return 0;
}