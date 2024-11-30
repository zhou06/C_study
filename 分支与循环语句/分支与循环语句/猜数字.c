#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{	
	// 1.生成随机数
	int answer = rand()%100+1;	// 此处%100+1是为了让生成的随机数范围在1~100，任何一个数模上100，结果都是0~99
	printf("请猜数字:\n");
	int guess;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < answer)
			printf("猜小了\n");
		else if (guess > answer)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}


}
void menu()
{
	printf("*********************************\n");
	printf("********     1. play    *********\n");
	printf("********     0. exit    *********\n");
	printf("*********************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));	// 设置随机数的生成器
	int input = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();			// 猜数字的逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请输入0或1!\n");
			break;
		}
	} while (input == 0);

	return 0;
}