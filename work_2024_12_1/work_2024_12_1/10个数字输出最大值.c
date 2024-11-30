#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10];
	int i;
	int max;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	max = arr[0];

	for (i = 1; i < 10; i++) 
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);


	return 0;
}