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
	// ������������
	char mine[ROWS][COLS];	// ��Ų��úõ���
	char show[ROWS][COLS];	// ����ų��׵���Ϣ
	// ��ʼ����������
	// һ����'0'������ʾδ������
	// һ����'*'����չʾ����Ϸ��
	IintBoard(mine, ROWS, COLS, '0');
	IintBoard(show, ROWS, COLS, '*');
	// ��ӡ����
	DisplayBoard(show, ROW, COL);
	// ������
	SetBoard(mine, ROW, COL);
	// �Ų���
	FindBoom(mine, show, ROW, COL);

}
void test()
{
	int input = 0;	// �����ж��Ƿ���Ϸ
	do
	{
		menu();
		printf("����������ѡ���Ƿ������Ϸ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������0��1��\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned)time(NULL));	// ���������������
	test();
	return 0;
}