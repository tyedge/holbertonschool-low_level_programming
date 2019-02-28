#include "holberton.h"

/**
 * _pow_recursion - evaluates a string to
 * determine if it is a palindrome.
 * @x: First operand
 * @y: Second operand
 *
 * Return: -1 if y is lower than 0, and
 * the value of x raised to y otherwise.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
