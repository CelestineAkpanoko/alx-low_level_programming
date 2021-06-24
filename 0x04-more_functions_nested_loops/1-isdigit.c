#include "holberton.h"

/**
 * _isdigit - checks if a character is digit
 * @c: the character to be tested.
 *
 * Return: 1 if c is digit, and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

