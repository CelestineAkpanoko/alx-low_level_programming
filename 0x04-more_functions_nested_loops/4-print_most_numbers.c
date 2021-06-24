#include "holberton.h"

/**
 * print_most_numbers - print from 0-9 but not 2 and 4.
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
