#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: the string
 */

void rev_string(char *s)
{
	int len, head;
	char tmp;

	for (len = 1; s[len]; len++)
	{}

	for (head = 0; head < len; head++, len--)
	{
		tmp = s[len - 1];
		s[len - 1] = s[head];
		s[head] = tmp;
	}
}
