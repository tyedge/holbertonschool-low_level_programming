#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - This program prints a string, in
 * reverse
 * @s: First operand
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0, len, j;

	if (s == NULL)
	{
		return;
	}
	while (*s != '\0')
	{
		s++;
		i++;
	}
	len = i - 1;
	for (s--, j = len; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
