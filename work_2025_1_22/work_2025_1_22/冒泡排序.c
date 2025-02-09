#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 实现一个对整形数组的冒泡排序
void sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++) 
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)	// 目的是将较大值依次移到最右侧，第一次将最大值移动到最右侧，第二次将次大值移到最右侧靠左的位置
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}

int main()
{
	int arr[] = {5,1,2,7,4,8,9,6,0,3};
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}