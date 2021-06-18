#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
char ch;
ch = 'z';
while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
putchar('\n');
return (0);
}
