#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("��������\n");
	scanf("%d", &age);
	if (age < 18)
		printf("������\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 40)
		printf("׳��\n");
	else if (age >= 40 && age < 60)
		printf("����\n");
	else if (age >= 60 && age <= 100)
		printf("����\n");
	else
		printf("�ϱϵ�\n");
	 �ж�һ�����Ƿ�Ϊ����
	int num;
	printf("����һ������\n");
	scanf("%d", &num);
	if (0 != num % 2)
	{
		printf("������\n");
	}
	else
		printf("��ż��\n");

	 ���1-100֮�������
	int output_num = 1;
	while (output_num <= 100)
	{
		if (output_num % 2 == 1)
			printf("%d ", output_num);
		output_num++;
	}
	return 0;
}