#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: the first number
 * @b: second number
 *
 * Return: result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - divides two numbers
 * @a:  first number
 * @b: second number
 *
 * Return: the dividion of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - obtains the remainder from a divided number
 * @a: first number
 * @b: second number
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
