#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
	int* ans = (int*)malloc(sizeof(int)*2 * numsSize);
	int i = 0;
	//for (i = 0; i < numsSize; i++)
	//{
	//	ans[i] = nums[i];
	//}
	//for (i = 0; i < numsSize; i++)
	//{
	//	ans[i+numsSize] = nums[i];
	//}
	for (i = 0; i < numsSize * 2; i++)		// 等价于上面两个循环
	{
		int temp = i % numsSize;
		ans[i] = nums[temp];
	}
	*returnSize = 2 * numsSize;
	return ans;
}

void print(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int num[4] = { 1,2,3,4 };
	int sz = sizeof(num) / sizeof(num[0]);
	int returnSize = 0;
	int numsSize = sizeof(num) / sizeof(num[0]);
	int* result = getConcatenation(num, numsSize, &returnSize);
	print(result, returnSize);
	free(result);
	return 0;
}