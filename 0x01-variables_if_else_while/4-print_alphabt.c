#include <stdio>

/**
 * main - Prints all lower case alphabets except q and e.
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
	if (ch == 'q' || ch == 'e')
		continue;
	putchar(ch);
}
putchar(new_line);

return (0);
}
