#include "holberton.h"

/**
 * _strcpy - creates a copy of a string
 * @src: the original string
 * @dest: the copy
 * R
 *
 * Return: the copy dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0, x = 0;

	while (*(src + l) != '\0')
		l++;

	for ( ; x < l ; x++)
		dest[x] = src[x];

	dest[l] = '\0';

	return (dest);
}
