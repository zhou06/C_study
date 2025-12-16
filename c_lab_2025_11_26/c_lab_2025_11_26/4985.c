#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[5];
	scanf("%s",s);
	int A,B= 0;
	for (int i = 0; i < 5; i++)
	{
		if (s[i] == 'A')
			A++;
		else
			B++;
	}
	printf("%c",A > B ? 'A' : 'B');
	return 0;
}