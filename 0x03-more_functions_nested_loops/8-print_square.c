#include "holberton.h"

/**
 * print_square - prints out
 * a square pattern using #.
 * @size: First operand
 *
 * Return: void
 */

void print_square(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j >= 0; j--)
			{
				if (i != j)
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
