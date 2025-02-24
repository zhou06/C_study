#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
// ��ʽ1 ������
int my_strlen1(const char* str)
{
	int count = 0;
	assert(str);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
// ��ʽ2 �ݹ�
int my_strlen2(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen2(str + 1);
}
// ��ʽ3 ָ��-ָ��
int my_strlen3(const char* str)
{
	assert(str);
	char* p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;
}

int main()
{
	const char* str = "abcdefg";
	printf("%d\n",my_strlen1(str));
	printf("%d\n",my_strlen2(str));
	printf("%d\n",my_strlen3(str));
	return 0;
}