#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10];
	char s2[10];
	char s3[10];
	scanf("%s %s %s", s1, s2, s3);
	printf("%c%c%c", s1[0], s2[0], s3[0]);
	return 0;
}