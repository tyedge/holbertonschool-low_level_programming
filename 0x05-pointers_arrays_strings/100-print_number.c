#include "holberton.h"
#include <stdio.h>

void print_unsignedint(unsigned int n);

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	print_unsignedint((unsigned int)n);
}


/**
 * print_unsignedint - prints unsigned interger
 * @n: unsigned int to be printed
 *
 * Return: void
 */
void print_unsignedint(unsigned int n)
{
	if (n / 10)
	{
		print_unsignedint(n / 10);
	}
	_putchar((n % 10) + '0');
}
