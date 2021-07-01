#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: string to be capitalized.
 *
 * Return: Capitalized string.
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[0] >= 90 && n[0] <= 122)
		n[0] -= 32;

	for (i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] > 96 && n[i + 1] < 123)
					n[i + 1] = n[i + 1] - 32;
		}
	}
	return (n);
}
