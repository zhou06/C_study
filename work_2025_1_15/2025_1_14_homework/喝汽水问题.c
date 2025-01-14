#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

int main()
{
	int x = 20;
	int y = 0;
	y = x;
	while (x >= 2) 
	{
		y += x / 2;
		x = x / 2;
	}
	printf("20元能喝%d瓶汽水", y);
	return 0;
}