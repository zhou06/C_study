#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	
	int left = 0;
	int right = strlen(arr1) - 1;	// 此处right的值有两种求法,一种使用strlen,使用后需要减一,一种使用sizeof,但是需要减二

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		// 减缓执行速度，停顿1s
		Sleep(1000);	// 调用时需要引入windows.h库
		// 清空屏幕
		system("cls");	// 调用时需要引入stdlib.h库
		printf("%s\n", arr2);
		left++;
		right--;
	}


	return 0;
}