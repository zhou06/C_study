#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[21];
	int a;
	int b;
	int c;
	int index;
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
		s[i].index = i;
		s[i].sum = s[i].a + s[i].b + s[i].c;
	}
	int max_idx = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].sum > s[max_idx].sum || (s[i].sum == s[max_idx].sum && i < max_idx))
		{
			max_idx = i;
		}
	}
	printf("%s", s[max_idx].name);
	return 0;
}