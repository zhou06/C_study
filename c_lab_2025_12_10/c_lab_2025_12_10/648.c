#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 回溯函数：生成全排列
void backtrack(int pos, int arr[], int used[], int n) 
{
    // 当排列长度等于n时，输出当前排列
    if (pos == n) 
    {
        for (int i = 0; i < n; i++)
        {
            if (i > 0) 
            {
                printf(" ");
            }
            printf("%d", arr[i]);
        }
        printf("\n");
        return;
    }

    // 按1到n的顺序选择数字（保证字典序）
    for (int i = 1; i <= n; i++) 
    {
        if (!used[i]) 
        { // 若数字i未被使用
            used[i] = 1;       // 标记为已使用
            arr[pos] = i;      // 将i加入当前排列
            backtrack(pos + 1, arr, used, n); // 递归处理下一个位置
            used[i] = 0;       // 回溯：标记为未使用
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[11];
    int used[11] = { 0 };
 
    backtrack(0, arr, used, n);
    return 0;
}