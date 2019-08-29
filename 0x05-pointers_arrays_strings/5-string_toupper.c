#include <stdio.h>
#include "holberton.h"

/**
 * string_toupper - This program changes all lowercase
 * letters of a string to uppercase
 * @m: pointer to a character string
 *
 * Return: a pointer to modified string
 */

char *string_toupper(char *m)
{
	char *p = m;

	if (m == NULL)
		return (NULL);

	while (*p)
	{
		if (*p >= 97 && *p <= 122)
		{
			*p -= 32;
		}
		_putchar(*p);
		p++;
	}
	return (p);
}
