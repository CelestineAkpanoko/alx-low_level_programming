#include "holberton.c"

/**
 * puts2 - prints characters of a string
 * @str: the string
 */

void puts2(char *str)
{
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{}

	for (i = 0; i < len: i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
