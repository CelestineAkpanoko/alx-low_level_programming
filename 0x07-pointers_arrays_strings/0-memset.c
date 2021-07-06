#include "holberton.h"

/**
 * _memset - fills memory with constant byte.
 * @s: memory area
 * @n: number of byte of memory
 * @b: constant byte
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
