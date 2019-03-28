#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - This program prints a string
 * to stdout
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	while (*str)
	{
		_putchar(str[i]);
		str += 2;
	}
	_putchar ('\n');
}
