#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv:  argument array.
 *
 * Return: if the number of arg is not exactly 1 return 1,
 * print 0 for success.
 */
int main(int argc, char *argv[])
{
	int cent, cnt = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
		printf("%d\n", 0);

	while (cent)
	{
		if (cent >= 25)
		{
			cent -= 25;
			cnt++;
		}
		else if (cent >= 10 && cent < 25)
		{
			cent -= 10;
			cnt++;
		}
		else if (cent >= 5 && cent < 10)
		{
			cent -= 5;
			cnt++;
		}
		else if (cent >= 2 && cent < 5)
		{
			cent -= 2;
			cnt++;
		}
		else
		{
			cent -= 1;
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return (0);
}

