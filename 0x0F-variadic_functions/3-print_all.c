#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 * fmat_c - prints characters
 * @all: list of variable arguments
 *
 * Return: void
 */
void fmat_c(va_list all)
{
	printf("%c", va_arg(all, int));
}

/**
 * fmat_i - prints intergers
 * @all: list of variable arguments
 *
 * Return: void
 */
void fmat_i(va_list all)
{
	printf("%d", va_arg(all, int));
}

/**
 * fmat_f - prints floating point numbers
 * @all: list of variable arguments
 *
 * Return: void
 */
void fmat_f(va_list all)
{
	printf("%f", va_arg(all, double));
}

/**
 * fmat_s - Short description
 * @all: list of variable arguments
 *
 * Return: void
 */
void fmat_s(va_list all)
{
	char *str = va_arg(all, char *);

	if (str == NULL)
	{
		printf("%p", str);
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all format types
 * @format: a point to the format string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	fmat ref[] = {
		{'c', fmat_c},
		{'i', fmat_i},
		{'f', fmat_f},
		{'s', fmat_s},
		{'\0', NULL},
	};

	va_list all;
	int i = 0, n;
	char *sep1 = "", *sep2 = ", ";

	va_start(all, format);

	while (format != NULL && format[i] != '\0')
	{
		n = 0;
		while (ref[n].fmt != '\0')
		{
			if (format[i] == ref[n].fmt)
			{
				printf("%s", sep1);
				ref[n].str(all);
				sep1 = sep2;
			}
			n++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
