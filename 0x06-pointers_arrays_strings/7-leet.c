#include "holberton.h"

/**
 * leet - encodes to 1337
 * @n: string to be encoded
 *
 * Return: encoded string.
 */
char *leet(char *n)
{
	int i, j;

	char s1[10] = "aAeEoOtTlL";
	char S2[10] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
				n[i] = s2[j];
		}
	}
	return (n);
}
