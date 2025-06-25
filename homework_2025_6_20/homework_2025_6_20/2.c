#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2、定义函数，将含有n (n为偶数)个元素的数组元素前半部与后半部对调。函数头为 void f(int 
*x, int n) 或void f(int x[ ], int n)。
*/
void f(int* x, int n)
{
	int mid = n / 2;
	int i = 0;
	for (i = 0; i < mid; i++)
	{
		int temp = x[i];
		x[i] = x[i + mid];
		x[i + mid] = temp;
	}
}

int main()
{
	int x[6] = { 1,2,6,3,2,5 };
	int n = 6;
	f(x, 6);
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", x[i]);
	}
	return 0;
}