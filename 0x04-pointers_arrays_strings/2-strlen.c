#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - this function finds the
 * length of a string.
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	for (i = 0; *s != '\0'; s++, i++)
	{
		;
	}
	return (i);
}
