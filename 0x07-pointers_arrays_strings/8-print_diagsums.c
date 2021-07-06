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
	int i, j;
	long sum;

	for (i = 0, i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}
	return (sum);
}
