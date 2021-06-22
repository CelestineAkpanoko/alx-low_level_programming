#include "holberton.h"
/**
 * main - prints holberton with __putchar()
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	char str[] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
