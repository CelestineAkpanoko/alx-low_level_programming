#include "holberton.h"

/**
 *  _islower - checks for lowercase.
 * @c: character to be tested
 *
 * Return: 1 if lower and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
