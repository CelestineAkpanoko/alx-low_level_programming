#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number.
 *
 * Return: the factorized number.
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	return n * factorial (n - 1);
}
