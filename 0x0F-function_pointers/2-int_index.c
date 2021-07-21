#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to be searched in
 * @size: array size
 * @cmp: the pointer to a function that compare
 *
 * Return: the index of the first element, -1 if no element matches,
 * -1 if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == cmp(array[i]))
			return (i);
		else
			return (-1);
	}
}

