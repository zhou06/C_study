#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 模拟用户登录场景，只能输入三次，正确提示成功，均错误退出程序

// 比较两个字符串是否相等，不能使用==，而需要用一个库函数strcmp,引入string.h库即可
// 如果两个字符串相等，则会输出0
int main()
{
	int i;
	char password[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);	// 数组不需要取地址，数组本身就是地址
		if (strcmp(password,"abcdef") == 0)	
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序");
	}
	return 0;
}