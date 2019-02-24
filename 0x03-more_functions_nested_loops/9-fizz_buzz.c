#include <stdio.h>

/**
 * main - This program prints the numbers from
 * 1 to 100, followed by a new line. But for
 * multiples of three print Fizz instead of the
 * number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and
 * five print FizzBuzz.
 *
 * Return: void
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');

	return (0);
}
