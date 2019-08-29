#include <stdio.h>
#include "holberton.h"

/**
 * _strncpy - This program copies a string
 * @dest: First string
 * @src: Second string
 * @n: number of chararacter to be printed
 * from src
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
