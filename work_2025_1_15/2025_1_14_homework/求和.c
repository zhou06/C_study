#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
// 例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int n = 0;
	int sum = 0;
	printf("请输入一个数字：");
	scanf("%d", &n);
	sum = n + n * 11 + n * 111 + n * 1111 + n * 11111;
	printf("%d", sum);
}