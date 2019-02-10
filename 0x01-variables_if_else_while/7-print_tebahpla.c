#include <stdio.h>

/**
 * main - This program uses putchar to
 * print the alphabet in lowercase, in
 * reverse order.
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

	i = 25;

	while (i > -1)
	{
		putchar(abc[i]);
		i--;
	}

	putchar('\n');

	return (0);
}
