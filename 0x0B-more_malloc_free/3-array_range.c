#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lower limit
 * @max: upper limit
 *
 * Return: pointer to the memory location or
 * NULL if it fails.
 */

int *array_range(int min, int max)
{
	int i, a;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (a = 0, i = min; arr[a] <= max; a++, i++)
		arr[a] = i;
	return (arr);
}
