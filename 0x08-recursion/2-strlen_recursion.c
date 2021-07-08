#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 *
 * Return: the length.
 */

int _strlen_recursion(char *s)
{
	int cnt;

	if (*s != '\0')
	{
		cnt++;
		s--;
	}
	return (cnt);
}
