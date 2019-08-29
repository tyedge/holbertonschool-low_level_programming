#include <stdio.h>

/**
 * main - This program uses printchar to
 * print the alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{

	int i;

	char abc[26] = {'a', 'b', 'c', 'd', 'e',
			'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o',
			'p', 'q', 'r', 's', 't',
			'u', 'v', 'w', 'x', 'y', 'z'};

	i = 0;

	while (i < 26)
	{
		putchar(abc[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
