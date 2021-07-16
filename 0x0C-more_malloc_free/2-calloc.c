#include "holberton.h"

/**
 * _calloc - allocates memory for an array of nmemb element of size byte
 * each and returns a pointer to allocated memory.
 * @nmemb: numbers elements of size
 * @size: bytes size
 *
 * Return: NULL if malloc fails, otherwise pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(mem + i) = 0;

	return ((void *)mem);
}
