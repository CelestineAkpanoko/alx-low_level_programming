#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: the number of bytes to be allocated.
 *
 * Return: pointer to the allacated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
