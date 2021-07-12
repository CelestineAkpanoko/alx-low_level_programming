#include <stdio.h>
#include <stdlib.h>
int min_change(int amount);
/**
 * min_change - extract the minimum change
 * @cent: the amount
 *
 * Return: the minimum change
 */
int min_change(int cent)
{
	int cnt = 0;

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
	return (cnt);
}
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
	int cent, total_min_change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent > 0)
	{
		total_min_change = min_change(cent);
		printf("%d\n", total_min_change);
	}
	else
		printf("%d\n", 0);
	return (0);
}

