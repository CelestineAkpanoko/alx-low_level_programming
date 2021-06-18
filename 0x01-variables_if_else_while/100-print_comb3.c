#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;
	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++){
			putchar(i);
			putchar(j);

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
