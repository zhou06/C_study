#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 打印1-10的数字
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	// 只打印数字字符
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')	// 此处'0'和'9'是字符，对应ASCII码值，而不是0和9，而由于ASCII码中，0123456789是连续的，所以只有数字的ASCII值在这个范围内
			continue;
		putchar(ch);
	}

	return 0;
}