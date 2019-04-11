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
	char *p = n;
	char delim[] = {'.', ' ', '\t', '\n', ';', '!', '(', ')', '{', '}', '"', ','};

	if (n == NULL)
		return (NULL);

	if (n[0] >= 97 && n[0] <= 122)
		n[0] -= 32;

	while (*p != '\0')
	{
		i = 0;
		while (*p != '\0' && delim[i] != '\0')
		{
			if ((*p == delim[i]) && (*(p + 1) >= 97 && *(p + 1) <= 122))
			{
				p++;
				*p -= 32;
				i++;
			}
			i++;
		}
		p++;
		i = 0;
	}
	return (n);
}
