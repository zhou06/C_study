#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CountNum(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	return count;
}
int main()
{
	int n = 1999;
	int m = 2299;
	int a =  n^m ;
	printf("%d", CountNum(a));
	return 0;
}