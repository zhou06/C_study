#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int is_palindrome(int n)
{
	int temp = n;
	int reverse = 0;
	
	while (temp != 0)
	{
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}
	
	if (n == reverse)
		return 1;
	else
		return 0;
}

int main()
{
	int n, count;
	scanf("%d", &n);
	count = 0;
	for (int i = 11; i <= n; i++)
	{
		if (is_prime(i) && is_palindrome(i))
			count++;
	}
	printf("%d", count);

	return 0;
}