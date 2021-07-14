#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new in memory or null
 */
char *str_concat(char *s1, char *s2)
{
	char *dupstr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	dupstr = malloc(sizeof(char) * (i + j + 1));
	if (dupstr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		dupstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dupstr[i] = s2[j];
		i++, j++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}
