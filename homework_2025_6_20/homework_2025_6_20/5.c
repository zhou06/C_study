#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

/*5�����庯����ɾ���ַ����������ַ�������ͷΪ void f(char *x)��*/

void f(char* x)
{
	char* read = x;
	char* write = x;
	while (*read != '\0')
	{
		if (!isdigit(*read))
		{
			*write = *read;
			write++;
		}
		read++;
	}
	*write = '\0';
}

int main()
{
	char x[] = { "a1b234c2" };
	f(x);
	printf("%s", x);
	return 0;
}