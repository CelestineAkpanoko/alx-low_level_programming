#include <stdio.h>

/**
 * main -Prints alphabet in lower and upper case using
 * just 3 putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
char ch_lower_case;
char ch_upper_case;
char new_line;

new_line = '\n';

for (ch_lower_case = 'a'; ch_lower_case <= 'z'; ch_lower_case++)
	putchar(ch_lower_case);

for (ch_upper_case = 'A'; ch_upper_case <= 'Z'; ch_upper_case++)
	putchar(ch_upper_case);

putchar(new_line);

return (0);
}

