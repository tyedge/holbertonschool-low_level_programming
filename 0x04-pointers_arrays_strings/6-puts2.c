#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - This program prints every
 * other letter in a string
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 1;

	if (str == NULL)
	{
		return;
	}
	while (*str)
	{
		if (i % 2)
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
	_putchar ('\n');
}
