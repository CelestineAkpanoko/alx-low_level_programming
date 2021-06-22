#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: int value to compute
 *
 * Return: abs value of the int
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
