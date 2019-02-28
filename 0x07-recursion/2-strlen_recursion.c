#include "holberton.h"

/**
 * _strlen_recursion - this function finds the
 * length of an array.
 * @s: First operand
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
