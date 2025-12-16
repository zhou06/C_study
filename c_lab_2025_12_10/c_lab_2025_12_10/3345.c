#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j;
    char ch;
    for (i = 0; i < 3; i++)
    {
        int upper = 0, lower = 0, digit = 0, space = 0, other = 0;
        j = 0;
        while (scanf("%c", &ch) == 1 && ch != '\n')
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                upper++;
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                lower++;
            }
            else if (ch >= '0' && ch <= '9')
            {
                digit++;
            }
            else if (ch == ' ')
            {
                space++;
            }
            else
            {
                other++;
            }
        }
        printf("%d %d %d %d %d\n", upper, lower, digit, space, other);
    }
    return 0;
}