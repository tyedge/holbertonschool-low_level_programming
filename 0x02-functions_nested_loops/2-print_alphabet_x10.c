#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet,
 * in lowercase, followed by a new line
 * 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int lwr;

	i = 0;
	while (i <= 9)
	{
		lwr = 97;
		while (lwr <= 122)
		{
			_putchar(lwr);
			++lwr;
		}

		_putchar('\n');
		i++;
	}
}
