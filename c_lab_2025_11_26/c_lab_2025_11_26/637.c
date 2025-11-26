#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int l, r;
	while (scanf("%d %d", &l, &r) != EOF)
	{
		int found = 0;
		for (int a = l; a <= r; a++)
		{
			for (int b = a; b <= r; b++)
			{
				int c2 = a * a + b * b;
				int c = (int)sqrt(c2);

				if (c * c == c2 && c >= b && c <= r)
				{
					printf("%d %d %d\n", a, b, c);
					found = 1;
				}
			}

		}
		if (!found)
		{
			printf("NO\n");
		}
	}

	return 0;
}