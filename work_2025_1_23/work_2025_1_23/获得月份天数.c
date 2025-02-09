#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[]= { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int arr2[]= { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int a = 0;
	int	b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		{
			printf("%d", arr1[b]);
		}
		else
		{
			printf("%d", arr2[b]);
		}
	}
	return 0;
}