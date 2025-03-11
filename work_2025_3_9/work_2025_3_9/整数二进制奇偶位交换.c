#define _CRT_SECURE_NO_WARNINGS
#define change(num)(((num & 0x55555555) << 1)|((num & 0xAAAAAAAA) >> 1))
#include <stdio.h>

int main()
{
	int num = 5;
	printf("%d\n", num);
	int result = change(num);
	printf("%d\n", result);

	return 0;
}