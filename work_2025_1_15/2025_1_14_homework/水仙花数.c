#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_num(int n)
{
	int num = n;
	int a = 0;
	int sum = 0;
	while (num > 0)			// ����n��λ��
	{
		num /= 10;
		a++;
	}
	num = n;
	for (num; num > 0; num /= 10)		// ���λa���ݵĺ�
	{
		int b = num % 10;
		int c = pow(b, a);
		sum += c;
	}
	if (n == sum)
		return 1;
	else
		return 0;
}

int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		if (is_num(i))
			printf("%d ", i);
	}
	return 0;
}