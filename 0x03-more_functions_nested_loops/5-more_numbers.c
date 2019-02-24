#include "holberton.h"

/**
 * more_numbers - This program uses putchar to
 * print decimal numbers 0-14, ten times
 *
 * Return: void
 */

void more_numbers(void)
{

	int i, count;

	for (i = 0; i < 10; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count >= 10)
			{
				_putchar(count / 10 + '0');
				_putchar(count % 10 + '0');
			}
			else
			{
				_putchar(count % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
