#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_sys()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}

int main()
{
	if (check_sys())
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}