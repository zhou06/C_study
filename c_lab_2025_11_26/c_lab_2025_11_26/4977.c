#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int k;
	scanf("%d", &k);
	long long root = (long long)sqrt(k);
	if ((root * root == k) || ((root + 1) * (root + 1) == k))
		printf("Yes");
	else
		printf("No");
	return 0;
}