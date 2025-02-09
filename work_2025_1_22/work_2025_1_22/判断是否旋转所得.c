#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
// 例如：给定s1 =AABCD和s2 = BCDAA，返回1
// 给定s1=abcd和s2=ACBD，返回0.
int is_spin(char* s1,char* s2)
{
	int i = 0;
	int len = strlen(s1);
	if (strlen(s2) != len)
		return 0;
	if (len == 0)
		return 1;
	// 枚举s1所有左旋结果，并与s2对比
	for(i = 0;i < len;i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < len; j++)
		{
			if (s1[(i + j) % len] != s2[j])		// (i + j) % len对应的就是s1[j]进行左旋i次后对应的下标
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			return 1;
	}
	return 0;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	printf("%d ",is_spin(s1, s2));
	char s3[] = "abcd";
	char s4[] = "ACBD";
	printf("%d ", is_spin(s3, s4));
	return 0;
}