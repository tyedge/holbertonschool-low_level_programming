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
		printf("%d is greater than 5\n", n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else if (n < 6)
		printf("%d is less than 6 and not 0\n", n);

	return (0);
}
