#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 5;
	printf("奇数位的二进制序列: ");
	for (int i = 31; i > 0; i -= 2)
	{
		if ((n & (1 << i)) >> i & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	printf("偶数位的二进制序列: ");
	for (int i = 30; i >= 0; i -= 2) {
		if ((n & (1 << i)) >> i & 1) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
	return 0;
}