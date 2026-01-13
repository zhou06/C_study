#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 10
#define MAX_NAME_LEN 100

typedef struct
{
    char name[MAX_NAME_LEN];
    double score;
    int order;
} Book;

int main()
{
    Book books[MAX_BOOKS];
    int i, j;

    // 读取10本书的信息
    for (i = 0; i < MAX_BOOKS; i++)
    {
        scanf("%s %lf", books[i].name, &books[i].score);
        books[i].order = i;  // 记录输入顺序
    }

    // 冒泡排序：按评分降序，评分相同按输入顺序排序
    for (i = 0; i < MAX_BOOKS - 1; i++)
    {
        for (j = 0; j < MAX_BOOKS - 1 - i; j++)
        {
            // 如果前面的评分小于后面的，或者评分相同但输入顺序靠后
            if (books[j].score < books[j + 1].score ||
                (books[j].score == books[j + 1].score && books[j].order > books[j + 1].order))
            {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    // 输出结果
    for (i = 0; i < MAX_BOOKS; i++)
    {
        printf("%s %.1lf\n", books[i].name, books[i].score);
    }

    return 0;
}