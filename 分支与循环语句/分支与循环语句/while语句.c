#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ��ӡ1-10������
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	// ֻ��ӡ�����ַ�
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')	// �˴�'0'��'9'���ַ�����ӦASCII��ֵ��������0��9��������ASCII���У�0123456789�������ģ�����ֻ�����ֵ�ASCIIֵ�������Χ��
			continue;
		putchar(ch);
	}

	return 0;
}