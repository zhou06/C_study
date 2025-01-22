#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 输入一个整数数组，实现一个函数，
// 来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
// 所有偶数位于数组的后半部分。
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 调整数组函数
void adjustArray(int arr[], int size) 
{
    int left = 0;
    int right = size - 1;
    while (left < right) {
        // 从左向右找到偶数
        while (left < right && arr[left] % 2 == 1) 
        {
            left++;
        }
        // 从右向左找到奇数
        while (left < right && arr[right] % 2 == 0) 
        {
            right--;
        }
        // 交换奇数和偶数的位置
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
