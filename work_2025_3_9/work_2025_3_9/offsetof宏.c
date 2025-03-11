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
    printf("Offset of a: %zu\n", offsetof(struct Example, a));  // 输出 0
    printf("Offset of b: %zu\n", offsetof(struct Example, b));  // 输出 4（假设 int 占4字节）
    printf("Offset of c: %zu\n", offsetof(struct Example, c));  // 输出 8（考虑对齐）
	return 0;
}