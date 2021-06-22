#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet times 10.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	_putchar('\n');
	}
}
