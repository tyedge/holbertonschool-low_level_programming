#include <stdio.h>
#include "holberton.h"

/**
 * rot13 - This program encodes a string using rot13
 * @p: Pointer to a string
 *
 * Return: pointer to a modified string
 */

char *rot13(char *p)
{
	int i, j;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (p[i] != '\0')
	{
		j = 0;
		while (arr1[j] != '\0')
		{
			if (p[i] == arr1[j])
			{
				p[i] = arr2[j];
				break;
			}
			j++;

		}
		i++;
	}
	return (p);
}
