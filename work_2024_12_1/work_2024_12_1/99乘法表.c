#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int line = 0;
	int i = 0;
	for (line = 1;line <= 9;line++)
	{
		for (i = 1;i <= line;i++)
		{
			printf("%dx%d=%d\t", i, line, i * line);
		}
		printf("\n");
	}
	return 0;
}

