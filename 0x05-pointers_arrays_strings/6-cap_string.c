#include <stdio.h>
#include "holberton.h"

/**
 * cap_string - This program capitalizes all
 * capitalizes all words of a string
 * @n: pointer to a character string
 *
 * Return: a pointer to modified string
 */

char *cap_string(char *n)
{
	int i;
	char delim[] = {'.', ' ', '\t', '\n', ';', '!', '(', ')', '{', '}', '"', ','};

	if (n == NULL)
		return (NULL);

	if (n[0] >= 97 && n[0] <= 122)
	{

		n[0] -= 32;
	}

	while (*n != '\0')
	{
		i = 0;
		while (*n != '\0' && delim[i] != '\0')
		{
			if ((*n == delim[i]) && (*(n + 1) >= 97 && *(n + 1) <= 122))
			{
				if (delim[i] == '\t')
					*n = ' ';
				n++;
				*n -= 32;
				i++;
			}
			i++;
		}
		n++;
		i = 0;
	}
	return (n);
}
