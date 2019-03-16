#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a variadic function that
 * prints numbers
 * @separator: a character string to be
 * printed between numbers, if present
 * @n: last fixed argument, and total count
 * of passed arguments
 *
 * Return: void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (n == 0)
		return;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			if (i != (n - 1))
				printf("%i ", va_arg(nums, unsigned int));
			else
				printf("%i\n", va_arg(nums, unsigned int));
		}
		else if (*separator == '\0')
		{
			if (i != (n - 1))
				printf("%i ", va_arg(nums, unsigned int));
			else
				printf("%i\n", va_arg(nums, unsigned int));
		}
		else if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%i%s", va_arg(nums, unsigned int), separator);
			else
				printf("%i\n", va_arg(nums, unsigned int));
		}
	}
	va_end(nums);
}
