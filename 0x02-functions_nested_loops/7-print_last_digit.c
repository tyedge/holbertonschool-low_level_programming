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
	long num;

	if (n < 0)
	{
		num = -n * -1;
		_putchar(-num % 10 + '0');
		return (-num % 10);
	}
	else
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
