#include "holberton.h"

/**
 * _memset - fills memory with constant byte.
 * @s: memory area
 * @n: number of byte of memory
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
