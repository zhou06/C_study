#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����һ���������飬ʵ��һ��������
// �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
// ����ż��λ������ĺ�벿�֡�
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// �������麯��
void adjustArray(int arr[], int size) 
{
    int left = 0;
    int right = size - 1;
    while (left < right) {
        // ���������ҵ�ż��
        while (left < right && arr[left] % 2 == 1) 
        {
            left++;
        }
        // ���������ҵ�����
        while (left < right && arr[right] % 2 == 0) 
        {
            right--;
        }
        // ����������ż����λ��
        if (left < right) 
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
int main() 
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    adjustArray(arr, size);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
