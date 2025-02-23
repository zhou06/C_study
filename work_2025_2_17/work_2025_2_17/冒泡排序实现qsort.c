#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void swap(void* p1, void* p2, int width)
{
	int i = 0;
	for (i = 0; i < width - 1; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* p1, void* p2))
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}

void test1()	// 排序整型数据
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	test1();
	return 0;
}