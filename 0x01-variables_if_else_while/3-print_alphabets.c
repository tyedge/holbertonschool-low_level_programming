#include <stdio.h>

/**
 * main - This program uses putchar to
 * print rints the alphabet in lowercase,
 * then in uppercase.
 *
 * Return: 0
 */

int main(void)
{

	int lwr;
	int upr;

	lwr = 97;

	while (lwr <= 122)
	{
		putchar(lwr);
		++lwr;
	}

	upr = 65;

	while (upr <= 90)
	{
		putchar(upr);
		++upr;
	}

	putchar('\n');

	return (0);
}
