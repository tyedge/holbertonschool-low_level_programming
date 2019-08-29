#include "holberton.h"

/**
 * more_numbers - This program uses putchar to
 * print decimal numbers 0-14, ten times
 *
 * Return: void
 */

void more_numbers(void)
{

	int first, sec, i = 0;

	while (i < 10)
	{
		for (first = 0; first <= 1; first++)
		{
			for (sec = 0; sec < 10; sec++)
			{
				if (first == 1)
				{
					if (sec == 5)
						break;
					_putchar(first + '0');
				}
				_putchar(sec + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
