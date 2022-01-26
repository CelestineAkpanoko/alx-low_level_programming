#include "holberton.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	n = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
