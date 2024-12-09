#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[10])
{
	int i = 0;				// 用于控制数组的遍历
	int mid = 0;			// 中间值，用于数组对应元素的逆置
	for (i = 0; i < 5; i++)
	{
		mid = arr[i];
		arr[i] = arr[9-i];
		arr[9 - i] = mid;
	}
}

int main()
{	
	int arr[10];
	init(arr);		// 初始化数组
	printf("初始化后的数组如下:\n");
	print(arr);		// 打印初始化后的数组
	printf("请输入数组内容:\n");
	for (int a = 0; a < 10; a++)		// 输入数组内容
	{
		scanf("%d", &arr[a]);
	}
	reverse(arr);
	printf("逆置后的数组如下:\n");
	print(arr);
	return 0;
}