#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int temp;
	if (a > b) 
	{ 
		temp = a; 
		a = b; 
		b = temp; 
	}
	if (a > c) 
	{ 
		temp = a; 
		a = c; 
		c = temp; 
	}
	if (b > c) 
	{ 
		temp = b;
		b = c; 
		c = temp;
	}
	if (a + b < c)
	{
		printf("Invalid");
	}
	else
	{
		if (a == b && b == c)
		{
			printf("Equilateral");
		}
		else if (a != b  && b != c)
		{
			printf("Scalene");
		}
		else
		{
			printf("Isosceles");
		}
	}
	return 0;
}