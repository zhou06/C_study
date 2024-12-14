#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void IintBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("——————————扫雷游戏——————————\n");
	int i = 0;
	for (i = 0; i <= col; i++)	// 打印列号
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)	// 此处为1是因为只需要打印9*9的棋盘，也即数组中2-10行和列
	{
		printf("%d ", i);	// 打印行号
		int j = 0;
		for (j = 1; j <= col; j++)	// 原因如上
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetBoard(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int GetBoom(char board[ROWS][COLS], int x, int y)
{
	int sum = board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1] + board[x + 1][y] + board[x + 1][y + 1]
		+ board[x + 1][y - 1] + board[x][y - 1] + board[x][y + 1];
	return sum - '0' * 8;
}

void FindBoom(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col) 
{	
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入需要排查的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board1[x][y] == '1')	
			{
				printf("你被炸死了，游戏结束\n");
				DisplayBoard(board1, row, col);
				break;
			}
			else
			{
				int count = GetBoom(board1, x, y);
				board2[x][y] = count + '0';
				DisplayBoard(board2, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(board1, row, col);
	}
}