#include "holberton.h"

/**
 * _strchr - searches a string for a specific character
 * @s: string to examine
 * @c: character to look for
 *
 * Return: pointer to index of first occurence, NULL if not found
 */

char *_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
