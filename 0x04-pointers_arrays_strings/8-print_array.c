#include <stdio.h>
#include "holberton.h"

/**
 * print_array - This program prints n
 * elements of an array of integers
 * @a: pointer to an array of integers
 * @n: the number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
		return;
	}
	for (i = 0; i < n; i++, a++)
	{
		if (n == 1 || i == n - 1)
		{
			printf("%d\n", *a);
		}
		else
		{
			printf("%d, ", *a);
		}
	}
}
