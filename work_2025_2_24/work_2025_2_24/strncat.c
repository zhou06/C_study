#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncat(char* dest, const char* src, size_t num)
{
	char* ret = dest;
	assert(dest && src);
	char* dest_end = dest;	// ���ҵ�dest��ĩβ
	while (*dest_end)
		dest_end++;
	size_t i = 0;
	for (i = 0; i < num && *src != '\0'; i++)	// ��ֹ����Ϊsrcδ����ĩβ����i<num
	{
		dest_end[i] = src[i];
	}
	dest_end[i] = '\0';
	return ret;
}

int main()
{
	char  dest[20] = { "abcde"};
	char* src = "fghijkl";
	printf("%s\n", my_strncat(dest, src, 3));

	return 0;
}