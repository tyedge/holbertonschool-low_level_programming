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
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		/*	printf("min is: %d and i is: %d\n", min, i);*/
		min++;
		i++;
	}
	return (arr);
}
