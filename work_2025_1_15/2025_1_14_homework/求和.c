#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
// ���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	int n = 0;
	int sum = 0;
	printf("������һ�����֣�");
	scanf("%d", &n);
	sum = n + n * 11 + n * 111 + n * 1111 + n * 11111;
	printf("%d", sum);
}