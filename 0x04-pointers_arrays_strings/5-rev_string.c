#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - This program reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j, len, swap;

	if (s == NULL)
		return;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0, j = len - 1; j >= 0; i++, j--)
	{
		if ((i < j) && (*s != '\0'))
		{
			swap = s[i];
			s[i] = s[j];
			s[j] = swap;
		}
	}

}
