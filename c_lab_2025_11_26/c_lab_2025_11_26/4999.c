#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    int flag = 0;
    while (n >= 222)
    {
        if (n % 1000 == 222)
        {
            flag = 1;
            break;
        }
        n /= 10;
    }

    printf("%s\n", flag ? "Yes" : "No");
    return 0;
}