#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98.
 * @n: First operand
 *
 * Return: void
 */

void print_to_98(int n)
{
	int num;

	while (n < 0)
	{
		num = n * -1;
		if (num >= 10)
		{
			printf("-%d", num / 10);
			printf("%d, ", num % 10);
		}
		else
		{
			printf("-%d, ", num);
		}
		n++;
	}
	while (n >= 0 && n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d, ", n);
		}
		n--;
	}

}
