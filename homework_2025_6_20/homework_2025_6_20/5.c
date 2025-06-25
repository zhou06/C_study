#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

/*5、定义函数，删除字符串的数字字符。函数头为 void f(char *x)。*/

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