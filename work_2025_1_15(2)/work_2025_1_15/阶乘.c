#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fac1(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Fac1(n - 1);
}
int Fac2(int n)
{	
	int result = 1;
	if (n == 0)
		return 1;
	else
	{
		while (n > 1)
		{
			result *= n;
			n--;
		}
		return result;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("�ݹ����,%d�Ľ׳�Ϊ%d\n", n, Fac1(n));
	printf("�ǵݹ���ã�%d�Ľ׳�Ϊ%d", n, Fac2(n));
	return 0;
}