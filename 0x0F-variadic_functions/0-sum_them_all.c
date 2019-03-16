#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function that
 * prints the sum of all its parameters
 * @n: last fixed argument, and total count
 * of passed arguments
 *
 * Return: 0 if n is 0, and the sum of the
 * other arguments otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, total;

	if (n == 0)
		return (0);

	va_start(nums, n);

	total = 0;

	for (i = 0; i < n; i++)
		total += va_arg(nums, unsigned int);

	va_end(nums);

	return (total);
}
