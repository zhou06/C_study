#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* dest, const char* str)
{
	char* ret = dest;
	assert(dest);
	assert(str);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *str++))
	{
		;
	}
	return ret;
}

int main()
{
	char dest[20] = { "abcd" };
	char* str = "efg";
	printf("%s", my_strcat(dest, str));
	return 0;
}