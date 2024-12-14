#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define EASY_COUNT 10

void IintBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void SetBoard(char borad[ROWS][COLS], int row, int col);

void FindBoom(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);

int GetBoom(char board[ROWS][COLS], int x, int y);