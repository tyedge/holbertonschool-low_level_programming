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
	if (str == NULL)
	{
		return;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar ('\n');
}
