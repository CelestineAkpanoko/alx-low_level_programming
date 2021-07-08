#include "holberton.h"

/**
 * _puts_recursion - prints a string.
 * @s: the string.
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
		return;
	s--;
	return _puts_recursion(s);
}	
