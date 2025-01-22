#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
	return 0;
}