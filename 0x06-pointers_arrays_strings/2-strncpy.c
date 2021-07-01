#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination string.
 * @src: source string.
 * @n: byte of src
 *
 * Return: pointer resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
