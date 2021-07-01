#include "holberton.h"

/**
 * rot13 - encode character in rot13 format
 * @str: - string to be encoded.
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{	
		str[i] = str[i] + 13;
	}
	return (str);
}
