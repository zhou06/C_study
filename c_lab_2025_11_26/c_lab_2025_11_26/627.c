#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int x, y;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    scanf("%d %d", &x, &y);
    int height = 0;

    if (pow(x - x1, 2) + pow(y - y1, 2) <= 1) 
    {
        height = 10;
    }
    else if (pow(x - x2, 2) + pow(y - y2, 2) <= 1) 
    {
        height = 10;
    }
    else if (pow(x - x3, 2) + pow(y - y3, 2) <= 1)
    {
        height = 10;
    }
    else if (pow(x - x4, 2) + pow(y - y4, 2) <= 1) 
    {
        height = 10;
    }

    printf("%d\n", height);

    return 0;
}
