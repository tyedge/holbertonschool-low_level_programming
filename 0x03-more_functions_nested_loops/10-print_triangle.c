#include "holberton.h"

/**
 * print_triangle - prints out
 * a triangle pattern using #.
 * @size: First operand
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (i > j)
					_putchar(32);
				else
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
