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
    int C[n + m];       // C��Ϊ������������
    for (int a = 0; a < (n + m); a++)       // ��A��B�������ȶ��Ž�C��
    {
        for (int b = 0; b < i; b++)         // ��A�����������η���C��
            C[b] = A[b];
        for (int c = i; c < (j + i); c++)   // ��B�����������η���C��
            C[c] = B[c - i];
    }

    // ͨ������ѭ���Ƚϣ���C�����нϴ�ֵ�Ƶ��Ҳ�
    int max = 0;
    for (int d = 0; d < (n + m - 1); d++)   // ����
    {
        for (int e = 1; e < (n + m - d); e++)    // ����d���Ҫ�ٽ��бȽ��ˣ�һ�������ֵ
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