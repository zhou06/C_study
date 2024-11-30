#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 定义一个Add函数,int为返回类型
int Add(int x, int y)	// Add为函数名，x,y为函数的参数
{	// 下面为函数体
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int n1 = 0;
	int n2 = 0;
	// 输入
	scanf("%d %d", &n1,&n2);
	// 求和
	int sum = Add(n1, n2);
	// 打印
	printf("sum=%d", sum);

	return 0;
}