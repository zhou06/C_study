#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
// arr��һ������һά���顣
void print(int arr[],int sz)
{
	int i = 0;
	int* p = arr;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", *(p + i));
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	return 0;
}