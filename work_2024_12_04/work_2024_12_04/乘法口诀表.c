#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void multiplication(int x)
{	
	int a = 0;
	int b = 0;
	for (a = 1; a <= x; a++)
	{
		for (b = 1; b <= a; b++) 
		{
			printf("%dx%d=%d ", b, a, a * b);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;		// i��i��
	printf("����������ȷ������ĳ˷�������:");
	scanf("%d", &i);
	multiplication(i);

	return 0;
}