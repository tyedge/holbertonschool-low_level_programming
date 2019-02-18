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
	if (n > 0)
	{
		_putchar(n % 10 + '0');
	}
	else
	{
		n *= -1;
		_putchar(n % 10 + '0');
	}
	return (n % 10);
}
