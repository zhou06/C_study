#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
// ��дһ�������ҳ�������ֻ����һ�ε����֡�
// ���磺
// �������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
// ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.

void findnum(int arr[], int sz, int *a, int *b)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < sz; i++)
	{
		sum ^= arr[i];
	}	// �õ������������Ľ��
	int x = 0;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			x = i;
			break;
		}
	}	// �õ����Ҳ�ֵΪ1��λ�ã�Ҳ���������������Ҳ������λ��ͬ��λ�ã�
	*a = 0;
	*b = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] & 1 << x)
			*a ^= arr[i];	// �ò�ͬλ�ö�������Ϊ1�ĸ�ֵ��a
		else
			*b ^= arr[i];	// �ò�ͬλ�ö�������Ϊ1�ĸ�ֵ��b
	}

}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	int b = 0;
	findnum(arr, sz, &a, &b);
	printf("%d %d", a, b);
	return 0;
}