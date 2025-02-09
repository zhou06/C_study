#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
// ���磺����s1 =AABCD��s2 = BCDAA������1
// ����s1=abcd��s2=ACBD������0.
int is_spin(char* s1,char* s2)
{
	int i = 0;
	int len = strlen(s1);
	if (strlen(s2) != len)
		return 0;
	if (len == 0)
		return 1;
	// ö��s1�����������������s2�Ա�
	for(i = 0;i < len;i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < len; j++)
		{
			if (s1[(i + j) % len] != s2[j])		// (i + j) % len��Ӧ�ľ���s1[j]��������i�κ��Ӧ���±�
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