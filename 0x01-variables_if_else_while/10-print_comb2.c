#include <stdio.h>

/**
 * main - This program uses putchar to
 * print all the numbers from 00 to 99
 * separated by a comma and space.
 *
 * Return: 0
 */

int main(void)
{

	int digit1;
	int digit2;

	digit1 = 48;


	while (digit1 <= 57)
	{
		digit2 = 48;

		while (digit2 <= 57)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 != 57 || digit2 != 57)
			{
				putchar(44);
				putchar(32);
			}

			digit2++;
		}

		digit1++;
		digit2 = 48;
	}

	putchar('\n');

	return (0);
}
