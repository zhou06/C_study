#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	// ����1!+2!+3!+...+10!
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum += ret;
	}

	printf("%d", sum);
	return 0;
}