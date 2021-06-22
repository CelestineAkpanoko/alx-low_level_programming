#include "holberton.h"
/**
 * main - prints holberton with __putchar()
 *
 * Return: 0.
 */
int main(void)
{
	char str[] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
