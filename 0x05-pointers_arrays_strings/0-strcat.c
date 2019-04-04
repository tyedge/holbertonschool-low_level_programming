#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - This program concatenates two strings
 * @dest: First string
 * @src: Second string
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;
	char *newstr = dest;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	i = 0;
        while (*newstr)
        {
		i++;
                newstr++;
        }
	len = i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j++] = '\0';
	return (dest);
}
