#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

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
	printf("20Ԫ�ܺ�%dƿ��ˮ", y);
	return 0;
}