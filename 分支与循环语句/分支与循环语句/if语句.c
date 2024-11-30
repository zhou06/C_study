#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("输入年龄\n");
	scanf("%d", &age);
	if (age < 18)
		printf("青少年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("壮年\n");
	else if (age >= 40 && age < 60)
		printf("中年\n");
	else if (age >= 60 && age <= 100)
		printf("老年\n");
	else
		printf("老毕登\n");
	 判断一个数是否为奇数
	int num;
	printf("输入一个数字\n");
	scanf("%d", &num);
	if (0 != num % 2)
	{
		printf("是奇数\n");
	}
	else
		printf("是偶数\n");

	 输出1-100之间的奇数
	int output_num = 1;
	while (output_num <= 100)
	{
		if (output_num % 2 == 1)
			printf("%d ", output_num);
		output_num++;
	}
	return 0;
}