#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s[100];
	int n;
	scanf("%s %d", s, &n);
	for (int i = 0;s[i] != '\0'; i++)
	{
		if (islower(s[i]))
		{
			s[i] = (s[i] - 'a' +n)%26 + 'a';
		}
		else
		{
			s[i] = (s[i] - 'A' + n) % 26 + 'A';
		}
	}
	printf("%s", s);
	return 0;
}