#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ģ���û���¼������ֻ���������Σ���ȷ��ʾ�ɹ����������˳�����

// �Ƚ������ַ����Ƿ���ȣ�����ʹ��==������Ҫ��һ���⺯��strcmp,����string.h�⼴��
// ��������ַ�����ȣ�������0
int main()
{
	int i;
	char password[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);	// ���鲻��Ҫȡ��ַ�����鱾����ǵ�ַ
		if (strcmp(password,"abcdef") == 0)	
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������˳�����");
	}
	return 0;
}