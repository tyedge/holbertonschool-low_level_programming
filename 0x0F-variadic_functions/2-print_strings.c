#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a variadic function that
 * prints strings
 * @separator: a character string to be
 * printed between strings, if present
 * @n: last fixed argument, and total count
 * of passed arguments
 *
 * Return: void
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	const char *str_ptr;

	if (n == 0)
		printf("%s", separator);

	va_start(strings, n);

	for (i = 0; i < n; i++, str_ptr++)
	{
		str_ptr = va_arg(strings, const char*);
		if (str_ptr == NULL)
			printf("%p", str_ptr);
		else
			printf("%s", str_ptr);

		if (separator != NULL)
		{
			if (n == 0)
			{
				printf("%s\n", separator);
			}
			else if (i != (n - 1))
			{
				printf("%s", separator);
			}
			else
			{
				printf("\n");
			}
		}
		if (separator == NULL && (i == (n - 1)))
		{
			printf("\n");
		}
	}
	va_end(strings);
}
