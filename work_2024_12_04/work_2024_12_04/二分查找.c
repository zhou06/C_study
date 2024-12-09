#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bin_search(int arr[], int left, int right, int key)
{
	while (left <= right)		// 当右下标小于左下标时停止查找
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (right < left)
		return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;			// 左下标
	int right = 9;			// 右下标
	int key = 0;			// 查找的数字
	scanf("%d", &key);
	int result = bin_search(arr, left, right, key);
	printf("%d", result);
	return 0;
}