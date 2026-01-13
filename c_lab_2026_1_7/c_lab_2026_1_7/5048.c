#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[21];
	int a;
	int b;
	int c;
	int sum;
}Student;

int main()
{
	Student s[1000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", s[i].name, &s[i].a, &s[i].b, &s[i].c);
		s[i].sum = s[i].a + s[i].b + s[i].c;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (s[j].sum > s[j + 1].sum)
			{
				Student temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%s %d %d %d\n", s[i].name, s[i].a, s[i].b, s[i].c);
	}
	return 0;
}