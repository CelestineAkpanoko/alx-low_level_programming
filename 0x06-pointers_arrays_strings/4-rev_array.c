#include "holberton.h"

/**
 * reverse_array - reverses the elements of array integers.
 * @a: the array
 * @n: the length of the array.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
