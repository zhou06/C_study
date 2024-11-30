#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 1.字面常量
// 2.const修饰的常变量

//int main() 
//{
//	//30;
//	//2.1;
//	//'a';
//	//"abc";
//	const int a = 10;	// 在定义变量前加一个const即可使该变量无法被更改
//	printf("a=%d\n", a);
//	return 0;
//}


// 3.define定义的标识符常量

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

// 4.枚举常量
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