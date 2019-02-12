#include <stdio.h>

/**
 * main - This program uses putchar to
 * print "Holberton."
 *
 * Return: 0
 */

int main(void)
{


	int sch[9] = {'H', 'o', 'l', 'b',
		      'e', 'r', 't', 'o', 'n'};

	int i = 0;

	while (i < 9)
	{
		putchar(sch[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
