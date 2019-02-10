#include <stdio.h>

/**
 * main - This program uses putchar to
 * print the single digits of base 10.
 *
 * Return: 0
 */

int main(void)
{

	char count;

	count = '0';

	while (count <= '9')
	{
		putchar(count);
		++count;
	}
	putchar ('\n');

	return (0);
}
