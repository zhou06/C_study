#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int A[10];
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &A[a]);
	}
	int sum = 0;
	for (a = 0; a < 10; a++)
	{
		sum += A[a];
	}
	printf("%f", sum / 10.0);


	return 0;
}