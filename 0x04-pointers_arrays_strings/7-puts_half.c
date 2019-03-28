#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - This program prints the last
 * half of a string
 * @str: given string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x, n, si;


	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}

	if (x % 2 == 0)
		n = x / 2;
	else
		n = (x - 1) / 2;

	for (si = x - n; str[si] != 0; si++)
	{
		putchar(str[si]);
	}
	putchar('\n');
}
