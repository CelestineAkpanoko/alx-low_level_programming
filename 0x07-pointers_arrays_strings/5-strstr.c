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

	if(*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}
		
		haystack++;
	}
	return ('\0');
}

