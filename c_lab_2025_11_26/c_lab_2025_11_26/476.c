#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char s[10000];

int main()
{
	fgets(s, 10000, stdin);
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			a++;
		}
		else if (s[i] == ' ')
		{
			b++;
		}
		else if (isdigit(s[i]))
		{
			c++;
		}
		else
		{
			d++;
		}
		i++;
	}
	printf("%d\n%d\n%d\n%d", a, b, c, d);

	return 0;
}