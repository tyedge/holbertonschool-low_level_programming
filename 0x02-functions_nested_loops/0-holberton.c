#include "holberton.h"

/**
 * main - This program uses putchar to
 * print "Holberton."
 *
 * Return: 0
 */

int main()
{


	int sch[9] = {'H', 'o', 'l', 'b',
		      'e', 'r', 't', 'o', 'n'};

	int i = 0;

	while (i < 9)
	{
		_putchar(sch[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
