#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;		// k��Ϊ��Ҫ���ҵ�����
	int sz = (sizeof(arr)) / (sizeof(arr[0]));	// ��arr��Ԫ�صĸ���
	// 1.ͨ��forѭ������arr���飬���в���
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i]) {
			printf("�ҵ��ˣ��±���%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("�Ҳ���");
	}
	// 2.ͨ�����ֲ��ҽ��
	int left = 0;		// �����������±�
	int right = 9;		// �������Ҳ���±�

	while (left <= right)		// ��left <= rightʱ��ζ�Ż�������δ�����ң���������Ҫ����ѭ��
	{
		int mid = (left + right) / 2;	// �����м���±꣬������ÿ�β��Һ��ٴθ�ֵ����֤���õ�midΪ�±�
		if (arr[mid] < k)		// ��Ϊ�����м����С��k����k��mid��right֮�䣬��������mid�Ҳ���Ҽ��ɣ����Խ�left��Ϊmid+1
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)	// ��������ͬ����ʱֻ�迼��mid��༴�ɣ����Խ�right��Ϊmid - 1
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	// ����int mid = (left + right) / 2;��ƽ��ֵ�ķ�����Ϊ�˷�ֹleft+right��ֵ������int�ķ�Χ���Բ�������д��
	// ��int mid = left+(right-left)/2;
	// ���ǲ�����int mid = left/2 + right/2;��Ϊ���������ᵼ�¶�ʧС��
	return 0;
}