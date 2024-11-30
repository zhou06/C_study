#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			a++;
		if (i / 10 == 9)
			a++;
	}
	printf("%d", a);


	return 0;
}