#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n = 0;
    scanf("%d", &n);    // 输入n个整数
    int arr[50] = { 0 };    // 创建对应数组
    int i = 0;
    for (i = 0; i < n; i++)     // 输入对应n个数字
    {
        scanf("%d ", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
            printf("%d ", arr[i]);
    }
    return 0;
}