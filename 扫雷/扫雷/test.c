#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("********     1. play    *********\n");
	printf("********     0. exit    *********\n");
	printf("*********************************\n");
}
void game()	
{
	// 创建两个数组
	char mine[ROWS][COLS];	// 存放布置好的雷
	char show[ROWS][COLS];	// 存放排出雷的信息
	// 初始化两个数组
	// 一个用'0'用来表示未放置雷
	// 一个用'*'用来展示给游戏者
	IintBoard(mine, ROWS, COLS, '0');
	IintBoard(show, ROWS, COLS, '*');
	// 打印棋盘
	DisplayBoard(show, ROW, COL);
	// 布置雷
	SetBoard(mine, ROW, COL);
	// 排查雷
	FindBoom(mine, show, ROW, COL);

}
void test()
{
	int input = 0;	// 输入判断是否游戏
	do
	{
		menu();
		printf("请输入数字选择是否进行游戏：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新0或1！\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned)time(NULL));	// 设置随机数生成器
	test();
	return 0;
}