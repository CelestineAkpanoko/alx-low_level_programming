#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the argument count
 * @argv: an array of arguments
 *
 * Return: 0 always for success.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
