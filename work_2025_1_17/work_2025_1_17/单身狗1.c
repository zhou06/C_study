#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
// 例如：
// 数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

int main()
{
	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
    int result = 0;
    for (int i = 0; i < 9; i++)
    {
        result ^= arr[i];
    }
    printf("%d", result);
	return 0;
}