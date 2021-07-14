#include "holberton.h"

/**
 * create_array -  creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array.
 * @c: specific character.
 *
 * Return: NULL if size is 0, or a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

