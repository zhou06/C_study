#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*4�����庯������һ���ַ������Ƶ���һ���ַ������������е�Сд��ĸ�滻Ϊ��Ӧ�Ĵ�д
��ĸ������ͷΪ void f(char *x, char *y)��
*/
void f(char* x, char* y)
{
	int n = strlen(x);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			y[i] = toupper(x[i]);
		}
		else
			y[i] = x[i];
	}
}

int main()
{
	char x[] = { "asdASFw" };
	char y[100] = { 0 };
	f(x, y);
	printf("%s", y);
	return 0;
}