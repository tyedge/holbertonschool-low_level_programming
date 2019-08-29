#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - This program swaps the values of
 * two integers
 * @a: First value
 * @b: Second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	if ((a == NULL) || (b == NULL))
		return;
	temp = *a;
	*a = *b;
	*b = temp;

}
