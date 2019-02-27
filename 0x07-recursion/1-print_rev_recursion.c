#include "holberton.h"

/**
 * _print_rev_recursion - this function finds the
 * length of an array.
 * @s: First operand
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int swap;
	int i = 0;
	int j = i + 1;

	if (*s == 0)
	{
		return;
	}
	else if (j > i)
	{
		swap = j;
		j = i;
		i = swap;
		_print_rev_recursion(s + 1);
	}
	_putchar(s[j]);

}
