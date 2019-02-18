#include "holberton.h"

/**
 * print_last_digit - prints the last
 * digit of a number.
 * @n: First operand
 *
 * Return: n % 10 when n is negative,
 * 0 otherwise.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (0);
	}
}
