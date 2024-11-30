#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 数组
	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
	double abc[] = { 12.1 };
	// 此处10对应下标为0,19对应下标为9
	// 因此想要取用19，用arr[9]即可
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}