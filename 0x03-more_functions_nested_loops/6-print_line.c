#include "holberton.h"

/**
 * print_line - prints a
 * straight line in the
 * terminal
 * @n: First operand
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar(95);

		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
