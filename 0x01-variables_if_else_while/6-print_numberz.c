#include <stdio.h>

/**
 * main - Prints base 10 numbers with putchar and without char.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

i = 0;
while (i < 10)
{
	putchar((i % 10) + '0');
	i++;
}
putchar('\n');
return (0);
}
