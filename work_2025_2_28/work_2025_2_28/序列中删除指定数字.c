#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n = 0;
    scanf("%d", &n);    // ����n������
    int arr[50] = { 0 };    // ������Ӧ����
    int i = 0;
    for (i = 0; i < n; i++)     // �����Ӧn������
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