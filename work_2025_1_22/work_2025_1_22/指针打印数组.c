#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 写一个函数打印arr数组的内容，不使用数组下标，使用指针。
// arr是一个整形一维数组。
void print(int arr[],int sz)
{
	int i = 0;
	int* p = arr;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", *(p + i));
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	return 0;
}