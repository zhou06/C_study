#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int x)
{
	int i = 0;
	if (x < 2)
		return 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int a = 0;
	printf("��������Ҫ�жϵ����֣�");
	scanf("%d", &a);
	if (is_prime(a))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	int b = 0;
	printf("100-200֮��������У�");
	for (b = 100; b <= 200; b++)
	{
		if (is_prime(b))
			printf("%d ", b);
	}
	return 0;
}