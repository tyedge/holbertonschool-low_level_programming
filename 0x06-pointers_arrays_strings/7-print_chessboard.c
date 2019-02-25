#include "holberton.h"

int findlen(char *n);

/**
 * print_chessboard - this function prints out
 * a chessboard.
 * @a: First operand
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int len = findlen(*a);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((a[i][j]) != 32)
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}


/**
 * findlen - this function finds the
 * length of an array.
 * @n: First operand
 *
 * Return: void
 */

int findlen(char *n)
{
	int i;

	for (i = 0; *n != 0; n += 8, i++)
	{
		;
	}
	return (i);
}
