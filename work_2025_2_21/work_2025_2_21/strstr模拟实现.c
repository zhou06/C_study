#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;	// 定义一个cp指针用来返回
	char* s1, * s2;
	if (!*str2)	// str2为0时直接返回str1
		return((char*)str1);
	while (*cp)	// 遍历str1
	{
		s1 = cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && !(*s1 - *s2))	// s1 和 s2未到末尾并且*s1和*s2相等
			s1++, s2++;
		if (!*s2)	// s2遍历到末尾，说明找到了相应的字符串
			return(cp);
		cp++;
	}
	return(NULL);	// 一直找不到，返回NULL
}




int main()
{
	char str[] = "This is a simple string";
	char* pch;
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 6);
	printf("%s\n", str);
	pch = my_strstr(str, "sample");
	strncpy(pch, "simple", 6);
	printf("%s\n", str);
	return 0;
}