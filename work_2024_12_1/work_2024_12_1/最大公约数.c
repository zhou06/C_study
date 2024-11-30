#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		int c = b;
		b = a % b;
		a = c;
	}
	printf("%d", a);


	return 0;
}