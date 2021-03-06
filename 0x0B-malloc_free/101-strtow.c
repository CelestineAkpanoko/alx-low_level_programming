#include "holberton.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to be counted.
 *
 * Return: int of number of words.
 */

int wrdcnt(char *s)
{
	int i, cnt = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				cnt++;
		}
		else if (i == 0)
			cnt++;
	}
	cnt++;
	return (cnt);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, cnt = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	cnt = wrdcnt(str);
	if (cnt == 1)
		return (NULL);
	w = (char **)malloc(cnt * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[cnt - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[cnt - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
