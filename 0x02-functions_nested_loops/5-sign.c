#include "holberton.h"

/**
 * print_sign - determines and prints
 * the sign of the number n.
 * @n: First operand
 *
 * Return: 1 if n is positive, -1 if
 * n is negative, 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return(0);
}
