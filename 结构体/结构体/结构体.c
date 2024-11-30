#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char tele[20];
};
int main()
{
	struct Stu s = { "张三",18,"男","13938446902" }; // 初始化Stu信息
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);// 打印结构体信息，此处.为结构成员访问操作符，结构体对象.成员名
	// ->操作符的用法
	struct Stu *ps = &s; // 此处创建一个指针变量ps存放s的地址
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);// 结构体指针变量->成员名
	return 0;
}