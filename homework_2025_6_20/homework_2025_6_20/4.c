#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*4、定义函数，将一个字符串复制到另一个字符串，并将其中的小写字母替换为对应的大写
字母。函数头为 void f(char *x, char *y)。
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