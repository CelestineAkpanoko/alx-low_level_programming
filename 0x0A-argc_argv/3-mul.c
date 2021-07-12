#include <stdio.h>

/**
 * main - multiply and print the result of two arguments.
 * prints error if it doesn't take two arguments.
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char **argv)
{
	int result;

	if (argc >= 3)
	{
		result = *(argv + 1) * *(argv + 2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

