#include <stdio.h>
#include "holberton.h"

/**
 * reset_to_98 - This program changes the
 * value of the int that a pointer points to
 * @n: a pointer to an int
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	if (n == NULL)
		return;
	*n = 98;
}
