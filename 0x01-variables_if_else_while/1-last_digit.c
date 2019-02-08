#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program generates a random
 * variable n and print the last digit of
 * the number stored in the variable.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
	{
		int d = n % 10;

		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n);
	}
	else if (n < 6)
	{
		int d = n % 10;

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}

	return (0);
}
