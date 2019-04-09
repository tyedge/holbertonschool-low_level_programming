#include <stdio.h>
#include "holberton.h"

/**
 * _strchr - This program locates a character
 * in a string
 * @s: String to be searched
 * @c: character for which to search
 *
 * Return: pointer to the first occurrence of c
 *if c is found, or NULL otherwise
 */

char *_strchr(char *s, char c)
{
	if (s == NULL || c == '\0')
		return (NULL);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
