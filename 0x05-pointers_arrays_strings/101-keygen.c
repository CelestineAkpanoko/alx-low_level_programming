#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creates and generate random valid passwords.
 *
 * Return: 0.
 */
int main(void)
{
	int rand_passwd, cnt, total;

	srand(time(0));
	for (cnt = 0, total = 2772; total > 122; cnt++)
	{
		rand_passwd = (rand() % 125) + 1;
		printf("%c", rand_passwd);
		total -= rand_passwd;
	}
	printf("%c", total);
	
	return (0);
}
