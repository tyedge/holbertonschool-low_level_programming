#include <stdio.h>
#include "holberton.h"

/**
 * _memcpy - This program copies n bytes from memory
 * area src to memory area dest
 * @dest: First area of memory
 * @src: Second area of memory
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
