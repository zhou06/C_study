#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*1�����庯��������һ��������λ��������ɵ�����������ͳ�Ƹ��������е�������֣���
�������ͨ���βδ���������������ͷΪ int f(int n, int *max)��
*/
int f(int n, int* max)
{
	int a = 0;
	*max = n % 10;
	while(n != 0)
	{
		a *= 10;
		a += n % 10;
		if (n % 10 > *max)
		{
			*max = n % 10;
		}
		n /= 10;
	}
	return a;
}

int main()
{	
	int n = 23854;
	int max = 0;
	int a = f(n,&max);
	printf("%d %d", a, max);
	return 0;
}