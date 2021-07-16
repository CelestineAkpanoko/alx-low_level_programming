#include "holberton.h"
#include <stdio.h>

/**
 * _realloc - allocates memory for an array.
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: old mem size
 * @new_size: new mem size
 *
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	void *str;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		str = malloc(new_size);
		size = new_size;
		if (old_size < new_size)
			size = old_size;
		for (i = 0; i < size; i++)
			((char *)str)[i] = ((char *)ptr)[i];
		free(ptr);
	}
	else
		return (NULL);
	return (str);
}
