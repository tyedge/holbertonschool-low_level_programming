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

	for (i = 0; i < n; i++)
	{
		str_ptr = va_arg(strings, const char*);

		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%s%s", str_ptr, separator);
			}
			else
			{
				printf("%s\n", str_ptr);
			}
		}
		if (separator == '\0')
		{
			if (i != (n - 1))
			{
				printf("%s", str_ptr);
			}
			else
			{
				printf("%s\n", str_ptr);
			}
		}
	}
	va_end(strings);
}
