#include "holberton.h"

/**
 * _pow_recursion - returns the value of x to the power of y.
 * @x: the x value
 * @y: the y value
 *
 * Return: -1 if y is less than 0. 1 if y is between 0 and 1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
