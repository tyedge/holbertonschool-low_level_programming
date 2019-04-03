#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - This program copies the string
 * pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * elements of an array of integers
 * @dest: pointer to an array of integers
 * @src: the number of elements to be printed
 *
 * Return: a pointer to the dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	dest[i] = src[0];
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i++] = '\0';
	return (dest);
}
