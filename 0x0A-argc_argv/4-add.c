#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the sum of postive numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 1 for error, and 0 for success.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	
	return (0);
}

