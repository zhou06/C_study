#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 1.���泣��
// 2.const���εĳ�����

//int main() 
//{
//	//30;
//	//2.1;
//	//'a';
//	//"abc";
//	const int a = 10;	// �ڶ������ǰ��һ��const����ʹ�ñ����޷�������
//	printf("a=%d\n", a);
//	return 0;
//}


// 3.define����ı�ʶ������

//#define MAX 100
//#define STR "abc"

//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("a=%d\n", a);
//	printf("%s\n",STR);
//
//	return 0;
//}

// 4.ö�ٳ���
enum Color
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum Color c = RED;
	return 0;
}