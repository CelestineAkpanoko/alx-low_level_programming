#include <stdio.h>

/**
 * main - calculates and displays the largest prime factor of 612852475143
 *
 * Return: 0.
 */
int main(void)
{
	long int n;

	n = 612852475143;
	long int div = 2, res = 0, max_fact;

	while (n != 0)
	{
		if (n % div != 0)
			div += 1;
		else
		{
			max_fact = n;
			n = n /div;
			if (n == 1)
			{
				printf("%d", max_fact);
				res = 1;
				break;
			}
		}
	}
	return (0);
}
