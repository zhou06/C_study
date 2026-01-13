#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[21];
	int a;
	int b;
	int c;
	int flag;
}Student;

int main()
{
	Student s[100];
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", s[i].name, &s[i].a, &s[i].b, &s[i].c);
		if (s[i].a < 60 || s[i].b < 60 || s[i].c < 60)
		{
			s[i].flag = 1;
			count++;
		}
		else
		{
			s[i].flag = 0;
		}
	}
	printf("%d\n", count);
	for (int i = 0; i < n; i++)
	{
		if (s[i].flag)
		{
			printf("%s %d %d %d\n", s[i].name, s[i].a, s[i].b, s[i].c);
		}
	}
	return 0;
}