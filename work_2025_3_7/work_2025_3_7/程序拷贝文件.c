#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ��data.txt�ļ�
	FILE* pf = fopen("data.txt", "r");
	if (!pf)
	{
		perror("���ļ�����");
		return 1;
	}
	// ��������data_copy.txt�ļ�
	FILE* Pf = fopen("data_copy.txt", "w");
	if (!Pf)
	{
		perror("�����ļ�����");
		return 1;
	}
	// ��ȡ���ݲ����
	int ch;		// ���ڴ��fgetc����ֵ
	while ((ch = getc(pf)) != EOF)
	{
		fputc(ch, Pf);
	}
	// ����Ƿ�������
	if (feof(pf))
		printf("�ļ���������\n");
	else
		perror("�ļ�δ��������\n");
	// �ر��ļ�
	fclose(pf);
	fclose(Pf);

	return 0;
}