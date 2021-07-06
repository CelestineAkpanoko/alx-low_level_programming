#include "holberton.h"

/**
 * _strstr - finds the first occurence of the substring needle 
 *	in the string haystack.
 * @haystack: the parent string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring, or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack == *needle)
			{
				haystack++;
				needle++;
			}
			else
				break;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
}

