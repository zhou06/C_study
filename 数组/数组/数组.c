#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ����
	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
	double abc[] = { 12.1 };
	// �˴�10��Ӧ�±�Ϊ0,19��Ӧ�±�Ϊ9
	// �����Ҫȡ��19����arr[9]����
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}