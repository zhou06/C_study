#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;	// ����һ��cpָ����������
	char* s1, * s2;
	if (!*str2)	// str2Ϊ0ʱֱ�ӷ���str1
		return((char*)str1);
	while (*cp)	// ����str1
	{
		s1 = cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && !(*s1 - *s2))	// s1 �� s2δ��ĩβ����*s1��*s2���
			s1++, s2++;
		if (!*s2)	// s2������ĩβ��˵���ҵ�����Ӧ���ַ���
			return(cp);
		cp++;
	}
	return(NULL);	// һֱ�Ҳ���������NULL
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