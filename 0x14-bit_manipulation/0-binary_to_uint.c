#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: the binary number
 *
 * Return: 0 if b contains any other char beside 0 and 1 or b is null
 * otherwise the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}