#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *n);

/**
 * string_nconcat - concatencates a string
 * @s1: First operand
 * @s2: Second operand
 * @n: Third operand
 *
 * Return: pointer to the memory location of
 * concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		str = malloc(len1 + sizeof(s2));
		if (str == NULL)
			return (NULL);
	}
	else if (n < len2)
	{
		str = malloc(len1 + n + 1);
		if (str == NULL)
			return (NULL);
	}
	*str = s1[0];
	for (i = 0; *s1 != '\0'; s1++, i++)
	{
		str[i] = s1[0];
	}
	for (a = 0; a < n && *s2 != '\0'; a++)
	{
		str[i++] = s2[a];
	}
	str[i++] = '\0';

	return (str);
}

/**
 * _strlen - finds the string length
 * @n: First operand
 *
 * Return: length of string
 */

int _strlen(char *n)
{
	int i = 0;

	while (*n++)
		i++;
	return (i);
}
