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
	int right = strlen(arr1) - 1;	// �˴�right��ֵ��������,һ��ʹ��strlen,ʹ�ú���Ҫ��һ,һ��ʹ��sizeof,������Ҫ����

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		// ����ִ���ٶȣ�ͣ��1s
		Sleep(1000);	// ����ʱ��Ҫ����windows.h��
		// �����Ļ
		system("cls");	// ����ʱ��Ҫ����stdlib.h��
		printf("%s\n", arr2);
		left++;
		right--;
	}


	return 0;
}