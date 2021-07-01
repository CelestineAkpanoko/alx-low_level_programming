#include "holberton.h"

/**
 * *_strcat - concantenates two strings.
 *@dest: destination string
 *@src: source string
 *
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		if (dest[i] == '\0')
		{
			j = 0;
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
				i++;
			}
		}
		i++;
	}
	return (dest);
}
