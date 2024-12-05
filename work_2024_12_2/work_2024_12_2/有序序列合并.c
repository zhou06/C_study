#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    int A[n];
    int B[m];
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (j = 0; j < m; j++)
    {
        scanf("%d", &B[j]);
    }
    int C[n + m];       // C作为最后输出的数组
    for (int a = 0; a < (n + m); a++)       // 将A和B的内容先都放进C中
    {
        for (int b = 0; b < i; b++)         // 将A数组内容依次放入C中
            C[b] = A[b];
        for (int c = i; c < (j + i); c++)   // 将B数组内容依次放入C中
            C[c] = B[c - i];
    }

    // 通过遍历循环比较，将C数组中较大值移到右侧
    int max = 0;
    for (int d = 0; d < (n + m - 1); d++)   // 遍历
    {
        for (int e = 1; e < (n + m - d); e++)    // 最后的d项不需要再进行比较了，一定是最大值
        {
            if (C[e] < C[e - 1])
            {
                max = C[e-1];
                C[e - 1] = C[e];
                C[e] = max;
            }
        }
    }
    for (int f = 0; f < (n + m); f++)
    {
        printf("%d ", C[f]);
    }
    return 0;
}