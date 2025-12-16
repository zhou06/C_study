#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
		printf("31");
	else if (x == 2)
		printf("28");
	else
		printf("30");

	return 0;
}