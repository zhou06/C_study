#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 有一个数字矩阵（杨氏矩阵），矩阵的每行从左到右是递增的，矩阵从上到下是递增的
// 请编写程序在这样的矩阵中查找某个数字是否存在。
// 要求：时间复杂度小于O(N);
int is_number(int arr[3][5],int r,int c,int num)
{
	int i = 0;
	int j = c - 1;
	// 从右上角的数字开始比较，比所需数字小就排除最上一行，大酒排除最右一列
	while (i < r && j >= 0)
	{
		if (arr[i][j] < num)
			i++;
		else if (arr[i][j] > num)
			j--;
		else		
			return 1;		
	}
	return 0;
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,4,6,7,9,3,10,13,15,16 };
	int num = 0;
	scanf("%d", &num);
	printf("%d ",is_number(arr, 3, 5, num));
	return 0;
}