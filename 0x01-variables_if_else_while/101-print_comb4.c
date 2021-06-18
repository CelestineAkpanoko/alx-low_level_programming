#include <stdio.h>

/**
 * main - prints all possible different combination of 3 digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
		for (y = 1; y < 9; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (x >= y && x >= z)
				{
					if (y >= z)
						continue;
				}
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				putchar(',');
				putchar(' ')
				if (x == 7 && y == 8 && z == 9)
				{
					break;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
