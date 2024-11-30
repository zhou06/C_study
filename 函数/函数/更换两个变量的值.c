#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 形参
void change(int *px,int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

// 当实参传递给形参时，形参是实参的一份临时拷贝
// 对形参的改变不会影响实参
// 所以为了使函数能够影响实参，需要利用指针变量

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// 交换
	printf("交换前:a=%d,b=%d\n", a, b);
	// a和b叫实参
	change(&a, &b);		// 将a和b的地址传递过去
	printf("交换后:a=%d,b=%d\n", a, b);

	return 0;
}