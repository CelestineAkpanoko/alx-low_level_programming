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

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc - 1; i++)
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
	}
	return (0);
}

