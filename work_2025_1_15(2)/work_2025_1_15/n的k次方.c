#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mi(int n,int k)
{
	if (k == 0 && n == 0)
	{
		printf("0的0次方无意义\n");
		return -1;
	}
	else if (n != 0 && k == 0)
	{
		return 1;
	}
	else
	{
		return n * mi(n, k - 1);
	}
}

int main()
{	
	int n = 0;
	int k = 0;
	printf("请依次输入需要计算的底数和幂:");
	scanf("%d %d", &n, &k);
	printf("%d^%d=%d", n, k, mi(n, k));
	return 0;
}