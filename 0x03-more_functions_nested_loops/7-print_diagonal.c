#include "holberton.h"

/**
 * print_diagonal - prints a diagonal
 *
 * @n: First operand
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= 10; j++)
			{
				if (j == i)
				{
					_putchar(92);
					_putchar('\n');
					break;
				}
				else
				{
					_putchar(32);
				}
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
