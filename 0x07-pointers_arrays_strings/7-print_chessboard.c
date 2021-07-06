#include "holberton.h"

/**
 * print_chessboard - prints a chesboard
 * @a: the chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; i < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}