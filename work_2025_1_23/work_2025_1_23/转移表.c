#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 1;
	int result = 0;
	int (*p[5])(int,int) = { 0,add,sub,mul,div };
	do
	{
		printf("************************\n");
		printf("1:add              2:sub\n");
		printf("3:mul              4:div\n");
		printf("0:exit                  \n");
		printf("************************\n");
		printf("��ѡ��:");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("���������:");
			scanf("%d %d", &x, &y);
			result = (*p[input])(x, y);
			printf("result = %d\n", result);
		}
		else if (input == 0)
			printf("�˳�������\n");
		else
		{
			printf("��?����\n");
		}
	} while (input);
	return 0;
}
