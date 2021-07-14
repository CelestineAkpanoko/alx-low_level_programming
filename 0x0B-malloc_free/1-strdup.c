#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly alloacated memory,
 * whcih contains a copy of a string given as a parameter.
 * @str: the string.
 *
 * Return: NULL if str is null. On success, pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dupstr;
	int i;

	if (str == NULL)
		return (NULL);
	dupstr = malloc(sizeof(*str) * strlen(str));

	i = 0;
	while (i != '\0')
	{
		dupstr[i] = str[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}

