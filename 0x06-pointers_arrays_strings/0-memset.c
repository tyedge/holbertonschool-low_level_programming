#include <stdio.h>
#include "holberton.h"

/**
 * _memset - This program fills memory with a
 * constant byte.
 * @s: Pointer to the memory area
 * @b: the constant byte the will fill area
 * @n: The number of bytes in string to be filled
 *
 * Return: pointer to string on success, NULL upon
 * failure
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++, s++)
	{
		*s = b;
	}
	return (s);
}
