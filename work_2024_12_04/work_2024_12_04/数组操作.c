#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[10])
{
	int i = 0;				// ���ڿ�������ı���
	int mid = 0;			// �м�ֵ�����������ӦԪ�ص�����
	for (i = 0; i < 5; i++)
	{
		mid = arr[i];
		arr[i] = arr[9-i];
		arr[9 - i] = mid;
	}
}

int main()
{	
	int arr[10];
	init(arr);		// ��ʼ������
	printf("��ʼ�������������:\n");
	print(arr);		// ��ӡ��ʼ���������
	printf("��������������:\n");
	for (int a = 0; a < 10; a++)		// ������������
	{
		scanf("%d", &arr[a]);
	}
	reverse(arr);
	printf("���ú����������:\n");
	print(arr);
	return 0;
}