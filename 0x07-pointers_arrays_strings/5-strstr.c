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
	char *h = haystack;
	char *n = needle;

	while(*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
}

