#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: arrays of arguments
 *
 * Return: Null if ac == 0 or av == NULL, other a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < acc; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
