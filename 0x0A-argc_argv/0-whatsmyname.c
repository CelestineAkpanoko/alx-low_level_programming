#include <stdio.h>

/**
 * main - a program that prints its name
 *@argc: argument count on the command line
 *@argv: array of arguments from the command line
 *
 * Return: 0 always for success.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
