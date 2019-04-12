#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - this function prints
 * sums of the two diagonals of a square
 * matrix of integers
 * @a: multi-dimensional array
 * @size: size of each dimension
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, diagl, addr;
	int x, diagr, subr;

	if (a == NULL)
		return;

	i = 0;
	addr = size + 1;
	diagl = a[i];
	while (i < (size * size))
	{
		diagl += a[i];
		i += addr;
	}

	x = ((size * size) - 1);
	subr = size - 1;
	diagr = a[x -= subr];
	while (x > 0)
	{
		x -= subr;
		diagr += a[x];
	}
	printf("%d, %d\n", diagl, diagr);

}
