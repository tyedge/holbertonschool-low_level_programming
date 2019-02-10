#include <stdio.h>

/**
 * main - This program uses putchar to
 * print all the  single digit numbers
 * of base 16 separated by a comma and
 * space.
 *
 * Return: 0
 */

int main(void)
{

	int count;

	count = 48;

	while (count <= 57)
	{
		putchar(count);

		if (count != 57)
		{
			putchar(44);
			putchar(32);
		}
		++count;

	}
	putchar('\n');

	return (0);
}
