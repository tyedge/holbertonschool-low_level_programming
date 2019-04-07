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
		printf("\n");

	va_start(nums, n);

	i = 0;
 	while (i < n)
	{
		int temp = va_arg(nums, unsigned int);
		printf("%d", temp);
		if (separator != NULL)
		{
			if(i != n - 1)
				printf("%s", separator);
			else
				printf("\n");
		}

		i++;
	}
	va_end(nums);
}
