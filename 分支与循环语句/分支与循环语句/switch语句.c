#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// �������֣������Ӧ���ڼ�
	int day;
	printf("\n������һ��1-7������\n");
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
		printf("�������ֳ�����Χ\n");
		break;
	}




	return 0;
}