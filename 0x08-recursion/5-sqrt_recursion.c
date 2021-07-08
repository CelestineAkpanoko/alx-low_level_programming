#include "holberton.h"

int check_root(int num, int root);
/**
 * check_root - finds the natural root of a number
 * @num: the number
 * @root: the tested root
 *
 * Return: the root if it has a natural, and -1 if not.
 */
int check_root(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: the number
 *
 * Return: -1 if n is not a natural square root.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (check_root(n, root));
}

