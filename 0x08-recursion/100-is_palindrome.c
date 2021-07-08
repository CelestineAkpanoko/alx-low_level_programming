#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 *
 * Return: 1 if palidrome, 0 otherwise.
 */
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * find_strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len)
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string
 * @len: the length of s
 * @i: the index of s
 *
 * Return: 1 if palindrome, and 0 if not.
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if(!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
