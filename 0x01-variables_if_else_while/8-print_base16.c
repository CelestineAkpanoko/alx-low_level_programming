#include <stdio.c>

/**
 * main - prints all base 16 numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
char hex;
hex = '0';
while (hex <= 'f')
{
	putchar(hex);
	hex++;
}
putchar('\n');
return (0);
}
