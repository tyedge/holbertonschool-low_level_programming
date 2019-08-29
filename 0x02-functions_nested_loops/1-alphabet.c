#include "holberton.h"

/**
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */

void print_alphabet(void)
{
	int lwr;

	lwr = 97;

	while (lwr <= 122)
	{
		_putchar(lwr);
		++lwr;
	}

	_putchar('\n');
}
