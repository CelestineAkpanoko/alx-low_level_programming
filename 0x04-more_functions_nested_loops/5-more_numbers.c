#include "holberton.h"

/**
 * more_numbers - prints 10 times the number from 0 - 14
 */

void more_numbers(void)
{
	int i;
	
	i = 1;

	while (i <= 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
