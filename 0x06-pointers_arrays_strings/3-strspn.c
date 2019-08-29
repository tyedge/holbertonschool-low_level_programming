#include <stdio.h>
#include "holberton.h"

/**
 * _strspn - This program gets the length
 * of a prefix substring.
 * @s: String to be searched
 * @accept: acceptable characters
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, a;

	if (s == NULL || accept == NULL)
		return (0);

	i = a = 0;
	while (s[i])
	{
		while (accept[a])
		{
			if (s[i] != accept[a])
			{
				a++;
			}
			else
			{
				count++;
				a = 0;
				i++;
			}
		}
		i++;
	}
	return (count);
}
