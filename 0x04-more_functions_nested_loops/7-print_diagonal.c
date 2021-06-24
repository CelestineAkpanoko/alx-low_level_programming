#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 * @n: the length of the line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
