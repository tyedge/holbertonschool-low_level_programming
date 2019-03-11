#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2D array of integers,
 * and NULL if width of height are <= 0, or if
 * the function fails
 */

int **alloc_grid(int width, int height)
{
	int **m, i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	m = malloc(height * sizeof(int *));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == NULL)
			return (NULL);
	}
	for(i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);
}
