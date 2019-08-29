#include <stdio.h>
#include "holberton.h"

/**
 * _strpbrk - This program searches a
 * string for any of a set of bytes
 * @s: First Operand
 * @accept: Second Operand
 *
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	if (s == NULL || accept == NULL)
		return (NULL);

	a = 0;
	while (*s)
	{
		while (accept[a])
		{
			if (*s == accept[a])
			{
				return (s);
			}
			else
			{
				a++;
			}
		}
		s++;
		a = 0;
	}
	return (NULL);
}
