#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �β�
void change(int *px,int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

// ��ʵ�δ��ݸ��β�ʱ���β���ʵ�ε�һ����ʱ����
// ���βεĸı䲻��Ӱ��ʵ��
// ����Ϊ��ʹ�����ܹ�Ӱ��ʵ�Σ���Ҫ����ָ�����

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// ����
	printf("����ǰ:a=%d,b=%d\n", a, b);
	// a��b��ʵ��
	change(&a, &b);		// ��a��b�ĵ�ַ���ݹ�ȥ
	printf("������:a=%d,b=%d\n", a, b);

	return 0;
}