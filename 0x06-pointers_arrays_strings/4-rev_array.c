#include "holberton.h"

/**
 * reverse_array - reverses the elements of array integers.
 * @a: the array
 * @n: the length of the array.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n; j > 0; j++)
			a[i] = a[j];
	}
}
