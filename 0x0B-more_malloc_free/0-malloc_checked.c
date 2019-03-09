#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates space in memory
 * using malloc
 * @b: size of memory allocation
 *
 * Return: pointer to the memory location or
 * 98 if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if  (p == NULL)
	{
		exit(98);
	}
	return (p);
}
