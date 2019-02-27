#include "holberton.h"

/**
 * _puts_recursion - this function finds the
 * length of an array.
 * @s: First operand
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
