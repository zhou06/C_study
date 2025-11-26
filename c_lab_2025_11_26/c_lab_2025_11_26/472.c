#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	if (scanf("%d", &x) == 1)
	{
		if (x < 1)
		{
			y = x;
		}
		else if (x >= 1 && x < 10)
		{
			y = 2 * x - 1;
		}
		else
		{
			y = 3 * x - 11;
		}
		printf("%d",y);
	}
	return 0;
}