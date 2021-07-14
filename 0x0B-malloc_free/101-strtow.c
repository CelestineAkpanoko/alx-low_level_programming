#include "holberton.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to be counted.
 *
 * Return: int of number of words.
 */

int wrdcnt(char *s)
{
	int i, cnt = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				cnt++;
		}
		else if (i == 0)
			cnt++;
	}
	cnt++;
	return (cnt);
}
