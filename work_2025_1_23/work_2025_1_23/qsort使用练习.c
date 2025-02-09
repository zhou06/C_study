#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

void test1()	// 排序整型数据
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_float(const void* p1, const void* p2)
{
	if (*(float*)p1 < *(float*)p2)
		return -1;
	else if (*(float*)p1 > *(float*)p2)
		return 1;
	else
		return 0;
}

void test2()	// 排序浮点型数据
{
	float arr[] = { 0.4,0.8,0.1,0.3 };
	int i = 0;
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_float);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_age(const void* p1, const void* p2)
{
	return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
}
void test3()	// 排序结构数据（根据年龄）
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",29},{"wangwu",14}};
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_stu_age);
}
int cmp_stu_name(const void* p1, const void* p2)
{
	return strcmp((*(struct Stu*)p1).name,(*(struct Stu*)p2).name);
}
void test4()
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",29},{"wangwu",14} };
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}