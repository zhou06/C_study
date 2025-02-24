#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* arr, const char* str)
{
	char* ret = arr;
	assert(arr != NULL);
	assert(str != NULL);
	while ((*arr++ = *str++))
	{
		;
	}
	return ret;
}

int main()
{
	char* str = { "hello" };
	char* arr[30];
	my_strcpy(arr, str);
	printf("%s\n", arr);
	return 0;
}