#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ʵ��һ�������������ð������
void sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++) 
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)	// Ŀ���ǽ��ϴ�ֵ�����Ƶ����Ҳ࣬��һ�ν����ֵ�ƶ������Ҳ࣬�ڶ��ν��δ�ֵ�Ƶ����Ҳ࿿���λ��
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}

int main()
{
	int arr[] = {5,1,2,7,4,8,9,6,0,3};
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}