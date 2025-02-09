#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
// 编写一个函数找出这两个只出现一次的数字。
// 例如：
// 有数组的元素是：1，2，3，4，5，1，2，3，4，6
// 只有5和6只出现1次，要找出5和6.

void findnum(int arr[], int sz, int *a, int *b)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < sz; i++)
	{
		sum ^= arr[i];
	}	// 得到两个数字异或的结果
	int x = 0;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			x = i;
			break;
		}
	}	// 得到最右侧值为1的位置（也就是两个数字最右侧二进制位不同的位置）
	*a = 0;
	*b = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] & 1 << x)
			*a ^= arr[i];	// 该不同位置二进制数为1的赋值给a
		else
			*b ^= arr[i];	// 该不同位置二进制数为1的赋值给b
	}

}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	int b = 0;
	findnum(arr, sz, &a, &b);
	printf("%d %d", a, b);
	return 0;
}