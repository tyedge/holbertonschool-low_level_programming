#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates space in memory
 * using malloc
 * @nmemb: number of array elements
 * @size: size
 *
 * Return: pointer to the memory location or
 * NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if  (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
