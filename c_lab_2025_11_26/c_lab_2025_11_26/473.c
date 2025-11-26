#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0;
	scanf("%d", &x);
	if (x >= 0 && x <= 100)
	{
		switch (x / 10)
		{
		case 10:
			printf("A");
			break;
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
			break;
		}
	}
	else
		printf("ERROR");

	return 0;
}