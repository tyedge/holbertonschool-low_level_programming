#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the 2D grid previously
 * created by the alloc_grid function
 * @grid: the address of the 2D grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
