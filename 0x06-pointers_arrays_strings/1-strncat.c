#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination sting
 * @src: source string.
 * @n: byte size for src.
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		while (n != 0)
		{
			dest[i] = src[j]
				if (src[j] == '\0')
					break;
			n--;
		}
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
