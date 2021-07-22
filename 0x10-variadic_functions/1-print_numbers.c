#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the character that separates the numbers
 * @n: number of integers passed to the function
 * @...: the integer parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, unsigned int));
		if (i != n - 1)
			printf("%s ", separator);
		else
			printf("\n");
	}
	va_end(ap);
}

