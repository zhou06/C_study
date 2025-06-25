#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_sz(int x[], int n, int m)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{	
		if (x[i] == m)
		{
			return i;
		}
	}
	return -1;
}

int main()
{ 
	int x[10] = { 3,2,2,4,5,4,2,2,3,4 };
	int n = 10;
	int m = 0;
	scanf("%d", &m);
	int min = find_sz(x, n, m);
	printf("%d", min);
	return 0;
}