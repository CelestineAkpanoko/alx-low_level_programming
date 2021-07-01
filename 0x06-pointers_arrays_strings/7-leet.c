#include "holberton.h"

/**
 * leet - encodes to 1337
 * @str: string to be encoded
 *
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i = 0, n = 5, j;
	char letter[5] = {'A', 'E', 'O', 'T', 'L'};
	char number[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;

		while (j < n)
		{
			if (str[i] == letter[j] || str[i] - 32 == number[j])
				str[i] = number[j];

			j++;
		}
		i++;
	}
	return (str);
}
