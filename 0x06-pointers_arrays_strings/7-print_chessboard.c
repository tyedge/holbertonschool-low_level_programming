#include <stdio.h>
#include "holberton.h"

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

	if (a == NULL)
		return;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((a[i][j]) != 32)
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
