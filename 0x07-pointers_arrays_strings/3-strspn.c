#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: acceptable bytes
 *
 * Return: theu number of bytes from s which consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_cnt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte_cnt += 1;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte_cnt);
		}
		s++;
	}
	return (byte_cnt);
}
