#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�
// ���磺
// �������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

int main()
{
	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
    int result = 0;
    for (int i = 0; i < 9; i++)
    {
        result ^= arr[i];
    }
    printf("%d", result);
	return 0;
}