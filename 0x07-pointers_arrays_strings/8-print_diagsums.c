#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a square
 *			of a square matrix of integers.
 * @a: the matric of integers.
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	print("%d, %d\n", sum1, sum2);
}
