#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{	
	// 1.���������
	int answer = rand()%100+1;	// �˴�%100+1��Ϊ�������ɵ��������Χ��1~100���κ�һ����ģ��100���������0~99
	printf("�������:\n");
	int guess;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < answer)
			printf("��С��\n");
		else if (guess > answer)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
	srand((unsigned int)time(NULL));	// �����������������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();			// �����ֵ��߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������0��1!\n");
			break;
		}
	} while (input == 0);

	return 0;
}