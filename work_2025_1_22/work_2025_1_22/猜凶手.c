#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
// ����Ϊ4�����ɷ��Ĺ���:
// A˵�������ҡ�
// B˵����C��
// C˵����D��
// D˵��C�ں�˵
// ��֪3����˵���滰��1����˵���Ǽٻ���
// �����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if((killer != 'a')+(killer == 'c')+(killer == 'd')+(killer != 'd') == 3)
			printf("�����ǣ�%c", killer);
	}
	return 0;
}