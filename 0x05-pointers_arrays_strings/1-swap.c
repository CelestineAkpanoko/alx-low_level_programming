#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first value to be swapped
 * @b: second value to be swapped.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
