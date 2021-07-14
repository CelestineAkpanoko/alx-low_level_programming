#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2d array of int.
 * @width: the row of array or width of grid.
 * @height: the column of array or height of grid.
 *
 * Return: NULL if width or height is 0 or negative, otherwise the pointer.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

