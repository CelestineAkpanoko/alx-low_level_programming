#include "holberton.h"

/**print_rev - prints string in reverse.
 * @s: the string
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{}

	for (; s[len - 1]; len--)
		_putchar(s[len - 1]);

	_putchar('\n');
}
