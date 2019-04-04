#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - This program concatenates two
 * strings, using at most n bytes from src
 * @dest: First string
 * @src: Second string
 * @n: number of byte to use from src
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, a, len1, len2;
	char *newstr = dest;
	char *othstr = src;

	if (dest == NULL && src == NULL)
	{
		return (src);
	}

	i = 0;
	while (*newstr)
	{
		i++;
		newstr++;
	}
	len1 = i;
	while (*othstr)
	{
		a++;
		othstr++;
	}
	len2 = a;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[len1 + j] = src[j];
		j++;
	}
	if (len2 >= n)
		dest[len1 + j++] = '\0';
	return (dest);
}
