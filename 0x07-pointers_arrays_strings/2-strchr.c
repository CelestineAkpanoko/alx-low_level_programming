#include "holberton.h"

/**
 * _strchr - locates a charater in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: a pointer to the first occurence of c in s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (c == *(s + i))
			return (s + i);
		else
			return (NULL);
	}
}
