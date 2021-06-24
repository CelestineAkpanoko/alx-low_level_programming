#include <stdio.h>

/**
 * main - calculates and displays the largest prime factor of 612852475143
 *
 * Return: 0.
 */
int main(void)
{
	long n, i;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
