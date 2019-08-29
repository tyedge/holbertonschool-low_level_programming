#include "holberton.h"

/**
 * print_binary - prints the binary representation
 * of a number
 * @n: the number to be represented
 *
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int start, flag;

	if (n == 0)
		_putchar(48);

	for (start = 63; start >= 0; start--)
	{
		bin  = n >> start;
		if (flag)
		{
			if (bin & 1)
			{
				putchar(49);
				flag = '1';
			}
			else
			{
				putchar(48);
				flag = '0';
			}
		}
		else
		{
			if (bin & 1)
			{
				putchar(49);
				flag = '1';
			}
		}
	}
}
