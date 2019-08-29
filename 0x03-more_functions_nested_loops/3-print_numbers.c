#include "holberton.h"

/**
 * print_numbers - This program uses putchar to
 * print decimal numbers 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);

	_putchar ('\n');
}
