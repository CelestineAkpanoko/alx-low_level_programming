#include "holberton.h"

/**
 * free_grid -  frees a 2D grid previously created.
 * @grid: the grid
 * @height: the height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	 free(grid);
}

