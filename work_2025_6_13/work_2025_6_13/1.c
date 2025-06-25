#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortThree(int* a,int* b,int* c)
{
	if (*a < *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*a < *c)
	{
		int temp = *a;
		*a = *c;
		*c = temp;
	}
	if (*b < *c)
	{
		int temp = *b;
		*b = *c;
		*c = temp;
	}
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	sortThree(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}