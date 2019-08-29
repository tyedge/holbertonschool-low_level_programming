#include <stdio.h>

/**
 * main - This program uses putchar to
 * print the alphabet in lowercase, and then
 * again in uppercase.
 *
 * Return: 0
 */

int main(void)
{

	int count;

	count = '0';

	while (count <= '9')
	{
		putchar(count);
		++count;
	}
	putchar('\n');
	return (0);
}
