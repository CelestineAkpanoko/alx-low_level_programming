#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: the number of times '_'should appear
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
	}
	else
		_putchar('\n');
	_putchar('\n');
}
