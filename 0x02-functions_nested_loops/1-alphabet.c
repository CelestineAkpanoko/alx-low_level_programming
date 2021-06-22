#include "holberton.h"

/**
 * main - prints alphabets in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

