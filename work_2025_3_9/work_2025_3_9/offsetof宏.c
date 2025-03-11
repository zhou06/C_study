#define _CRT_SECURE_NO_WARNINGS
#define offsetof(type,member) ((size_t)&((type*)0)->member)
#include <stdio.h>

struct Example 
{
    int a;
    char b;
    double c;
};


int main()
{
    printf("Offset of a: %zu\n", offsetof(struct Example, a));  // ��� 0
    printf("Offset of b: %zu\n", offsetof(struct Example, b));  // ��� 4������ int ռ4�ֽڣ�
    printf("Offset of c: %zu\n", offsetof(struct Example, c));  // ��� 8�����Ƕ��룩
	return 0;
}