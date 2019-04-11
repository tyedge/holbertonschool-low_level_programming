#include <stdio.h>
#include "holberton.h"

/**
 * cap_string - This program capitalizes all
 * capitalizes all words of a string
 * @n: pointer to a character string
 *
 * Return: a pointer to modified string
 */

char *leet(char *n)
{
	int i;
	char *k = n;
	char arr1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char arr2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	i = 0;
	while (*k != '\0')
	{
		while (arr1[i] && arr2[i])
		{
			if (*k == arr1[i])
			{
				*k = arr2[i];
			}
			i++;
		}
		k++;
		i = 0;
	}
	return (n);

}
