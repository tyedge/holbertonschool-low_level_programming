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
	int i = 0, len, a;

	if (s == NULL)
		return;
	while (*s)
	{
		i++;
		s++;
	}
	len = i;

	for (a = len; a >= 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
