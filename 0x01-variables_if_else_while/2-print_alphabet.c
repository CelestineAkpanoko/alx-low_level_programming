#include <stdio.h>

/**
 * main - Prints alphabet in lowercase with putchar
 *
 * Return: Always 0.
 */
int main(void)
{
char ch;
char new_line;
new_line = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar(new_line);
return (0);
}
