#include <stdio.h>

/**
 * main - prints numbers from 1-100, but prints fizz for multiples
 * of 3, and buzz for multiples of 5, but fizzbuzz for multiples of both.
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			continue;

		printf(" ")
	}
	printf("\n");

	return (0);
}
