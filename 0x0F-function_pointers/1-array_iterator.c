#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @size: the size of the array
 * @action: pointer to the function.
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || array == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
