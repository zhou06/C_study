#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void nixu(char* arr)
{
	int a = strlen(arr);
	int i = 0;
	int j = 0;
	char c = 0;
	for (i = 0, j = a - 1; i < j; i++, j--)
	{
		c = arr[i];
		arr[i] = arr[j];
		arr[j] = c;
	}
}

int main()
{
	char arr[] = "hello world";
	nixu(arr);
	printf("%s", arr);
	return 0;
}