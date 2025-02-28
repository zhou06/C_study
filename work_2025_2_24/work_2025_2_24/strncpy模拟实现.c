#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncpy(char* dest, const char* src, size_t num)
{
	char* ret = dest;
	assert(dest && src);
	size_t i = 0;
	for (i = 0; i < num; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			for (; i < num; i++)
			{
				dest[i] = '\0';
			}
			break;
		}
	}
	return ret;
}

int main()
{
	char  dest[20] = {0};
	char* src = "abcdefg";
	printf("%s\n", my_strncpy(dest, src, 10));

	return 0;
}