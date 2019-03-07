#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *n);

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 * or NULL if it fails
 */

char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *str != '\0'; str++, i++)
	{
		p[i] = str[0];
	}
	p[i++] = '\0';
	return (p);
}

/**
 * _strlen - finds the string length
 * @n: First operand
 *
 * Return: length of string
 */

int _strlen(char *n)
{
	int i;

	for (i = 0; *n != '\0'; n++, i++)
	{
		;
	}
	return (i);
}
