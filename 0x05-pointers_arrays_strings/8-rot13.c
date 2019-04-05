#include <stdio.h>
#include "holberton.h"

/**
 * rot13 - This program concatenates two strings
 * @p: Pointer to a string
 *
 * Return: pointer to a p
 */

char *rot13(char *p)
{
	int i;
	char *m = p;

	if (m == NULL)
		return (NULL);

	i = 0;
	while (*m)
	{
		if ((*m >= 65 && *m < 78) || (*m >= 97 && *m < 110))
		{
			*m += 13;
		}
		else if ((*m >= 78 && *m <= 90) || (*m >= 110 && *m <= 122))
		{
			*m -= 13;
		}
		m++;
		i++;
	}
	return (p);
}
