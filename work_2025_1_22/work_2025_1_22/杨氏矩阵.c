#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ��һ�����־������Ͼ��󣩣������ÿ�д������ǵ����ģ�������ϵ����ǵ�����
// ���д�����������ľ����в���ĳ�������Ƿ���ڡ�
// Ҫ��ʱ�临�Ӷ�С��O(N);
int is_number(int arr[3][5],int r,int c,int num)
{
	int i = 0;
	int j = c - 1;
	// �����Ͻǵ����ֿ�ʼ�Ƚϣ�����������С���ų�����һ�У�����ų�����һ��
	while (i < r && j >= 0)
	{
		if (arr[i][j] < num)
			i++;
		else if (arr[i][j] > num)
			j--;
		else		
			return 1;		
	}
	return 0;
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,4,6,7,9,3,10,13,15,16 };
	int num = 0;
	scanf("%d", &num);
	printf("%d ",is_number(arr, 3, 5, num));
	return 0;
}