#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Checks if the last digit of a random number is greater than 5,
 * equal to 0, or lesser than 6 and not 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	char str_n = (char) n;
	int last_n = (int) str_n[-1];

	if (last_n > 5)
		printf("Last digit of %d is %d and is greater than %d", n, last_n, 5);
	else if (last_n == 0)
		printf("Last digit of %d is %d and is %d", n, last_n, 0);
	else if (last_n < 6 && != 0)
		printf("Last digit of %d is %d and is less than %d and not %d",
			n, last_n, 6, 0);
}
else
{
	char str_n = (char) n;
	int last_n = (int) str_n[-1];

	last_n *= -1;

	if (last_n > 5)
		printf("Last digit of %d is %d and is greater than %d", n, last_n, 5);
	else if (last_n == 0)
		printf("Last digit of %d is %d and is %d", n, last_n, 0);
	else if (last_n < 6 && != 0)
		printf("Last digit of %d is %d and is less than %d and not %d",
			n, last_n, 6, 0);
return (0);

}
