#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min;
	arr = malloc(sizeof(int) * (size + 1));

	if (arr == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		*(arr + i) = min;
		min++;
	}

	return (arr);
}


