#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 输入数字，输出对应星期几
	int day;
	printf("\n请输入一个1-7的数字\n");
	scanf("%d", &day);
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("输入数字超出范围\n");
		break;
	}




	return 0;
}