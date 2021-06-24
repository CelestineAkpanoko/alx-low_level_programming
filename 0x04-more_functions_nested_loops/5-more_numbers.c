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
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
