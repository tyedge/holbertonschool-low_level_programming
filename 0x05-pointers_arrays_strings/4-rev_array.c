#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - This program reverses the
 * elements of an array
 * @a: pointer to an int array
 * @n: length of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	if (a == NULL)
		return;

	for (i = 0, j = n - 1; j > 0; i++, j--)
	{
		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

}
