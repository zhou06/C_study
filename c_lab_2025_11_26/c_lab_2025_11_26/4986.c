#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int L, R;
	scanf("%d %d", &L, &R);
	int sum = 0;
	for (int i = L; i <= R; i++)
	{
		int temp = i;
		while (temp)
		{
			if (temp % 10 == 7)
				sum++;
			temp /= 10;
		}
	}
	printf("%d", sum);
	return 0;
}