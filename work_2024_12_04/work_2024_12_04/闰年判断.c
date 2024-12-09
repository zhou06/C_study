#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_leap_year(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		printf("是闰年\n");
	else
		printf("不是闰年\n");
}
int main()
{
	int year = 0;
	printf("请输入需要确认的年份：");
	scanf("%d", &year);
	is_leap_year(year);
	return 0;
}