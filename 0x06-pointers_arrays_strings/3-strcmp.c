#include "holberton.h"

/**
 * _strcmp - compare thwo strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: a positive value if s1 is greater, 0 if equal
 * 	and negative if s1 is lesser.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
