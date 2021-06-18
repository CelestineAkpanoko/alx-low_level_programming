#include <stdio.h>

/**
 * main - Prints alphabet in lowercase with putchar
 *
 * Return: Always 0.
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch, "\n");

return (0);
}
