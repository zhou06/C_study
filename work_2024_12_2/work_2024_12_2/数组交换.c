#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A[5] = { 1,2,3,4,5 };
	int B[5] = { 6,7,8,9,10 };
	int a = 0;
	int mid;
	for (a = 0; a < 5; a++)
	{
		mid = A[a];
		A[a] = B[a];
		B[a] = mid;
	}
	printf("交换后数组A中的元素:");
	for (a = 0; a < 5; a++)
	{
		printf("%d ", A[a]);
	}
	printf("\n");
	printf("交换后数组B中的元素:");
	for (a = 0; a < 5; a++)
	{
		printf("%d ", B[a]);
	}


	return 0;
}