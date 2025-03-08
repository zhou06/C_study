#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 打开data.txt文件
	FILE* pf = fopen("data.txt", "r");
	if (!pf)
	{
		perror("打开文件出错：");
		return 1;
	}
	// 创建并打开data_copy.txt文件
	FILE* Pf = fopen("data_copy.txt", "w");
	if (!Pf)
	{
		perror("创建文件出错：");
		return 1;
	}
	// 读取数据并存放
	int ch;		// 用于存放fgetc返回值
	while ((ch = getc(pf)) != EOF)
	{
		fputc(ch, Pf);
	}
	// 检查是否复制完整
	if (feof(pf))
		printf("文件复制完整\n");
	else
		perror("文件未复制完整\n");
	// 关闭文件
	fclose(pf);
	fclose(Pf);

	return 0;
}