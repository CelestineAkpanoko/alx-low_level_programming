#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: the parameters
 *
 * Return: 0 if n == 0, otherwise the sum.
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list arg_param;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_param, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_param, unsigned int);

	va_end(arg_param);

	return (sum);
}
