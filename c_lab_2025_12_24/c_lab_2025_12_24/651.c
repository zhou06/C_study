#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char a[31], b[31];
    int len_a, len_b;
    int carry;
    int sum[32];
    int k;

    while (scanf("%s %s", a, b) == 2)
    {
        len_a = strlen(a);
        len_b = strlen(b);
        carry = 0;
        k = 0;

        int i = len_a - 1;
        int j = len_b - 1;

        while (i >= 0 || j >= 0 || carry)
        {
            int digit_a = (i >= 0) ? a[i] - '0' : 0;
            int digit_b = (j >= 0) ? b[j] - '0' : 0;
            int total = digit_a + digit_b + carry;

            sum[k] = total % 10;
            carry = total / 10;

            k++;
            if (i >= 0) i--;
            if (j >= 0) j--;
        }

        for (int idx = k - 1; idx >= 0; idx--)
        {
            printf("%d", sum[idx]);
        }
        printf("\n");
    }

    return 0;
}