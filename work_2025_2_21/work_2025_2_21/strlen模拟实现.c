#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
// 方式1 计数器
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
// 方式2 递归
int my_strlen2(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen2(str + 1);
}
// 方式3 指针-指针
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