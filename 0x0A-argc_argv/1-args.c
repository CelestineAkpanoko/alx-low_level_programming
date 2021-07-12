#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the argument counter
 * @argv: an array of arguments
 *
 * Return: 0 always for success.
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc);

	return (0);
}
