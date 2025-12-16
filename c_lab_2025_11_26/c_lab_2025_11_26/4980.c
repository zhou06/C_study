#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k;
	scanf("%d", &k);
	if (k % 2 == 0)
		printf("even");
	else
		printf("odd");

	return 0;
}