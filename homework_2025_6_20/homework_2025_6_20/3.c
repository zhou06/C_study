#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*3�����庯������һ���ַ���ǰn���ַ����ӵ���һ���ַ������档����ͷΪ void f(char *x,
 char *y)��
*/
void f(char* x, char* y)
{
	int n = strlen(x);
	char* dest = y;
	while (*dest != '\0')
	{
		dest++;
	}
	int i = 0;
	for (i = 0; i < n && x[i] != '\0'; i++)
	{
		*dest = x[i];
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char x[] = { "asdhqi" };
	char y[20] = { "ahsk" };
	f(x, y);
	printf("%s", y);
	return 0;
}