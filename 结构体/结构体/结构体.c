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
	struct Stu s = { "����",18,"��","13938446902" }; // ��ʼ��Stu��Ϣ
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);// ��ӡ�ṹ����Ϣ���˴�.Ϊ�ṹ��Ա���ʲ��������ṹ�����.��Ա��
	// ->���������÷�
	struct Stu *ps = &s; // �˴�����һ��ָ�����ps���s�ĵ�ַ
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);// �ṹ��ָ�����->��Ա��
	return 0;
}