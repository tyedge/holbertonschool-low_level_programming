#include <stdio.h>

/**
 * main - This program uses putchar to
 * print all the numbers of base 16 in
 * lowercase.
 *
 * Return: 0
 */

int main(void)
{

	int count;
	char letter;

	count = 48;

	while (count <= 57)
	{
		putchar(count);
		++count;
	}

	letter = 97;

	while (letter <= 102)
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');

	return (0);
}
