#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @arg: a list of arguments
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}
/**
 * print_int - prints an int.
 * @arg: list of arguments
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - prints a float.
 * @arg: list of arguments
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - prints string
 * @arg: list of argument
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything, followed by a new line.
 * @format: the type of data to be printed
 * @...: parameters passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *separator = "";
	printer_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

