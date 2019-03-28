#include <stdio.h>
#include "holberton.h"

/**
 * _puts - This program prints a string
 * to stdout
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	while (*str)
	{
		_putchar(str[i]);
		str++;
	}
	_putchar ('\n');
}
