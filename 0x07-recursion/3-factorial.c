#include "holberton.h"

/**
 * factorial - finds the factorial of an
 * integer
 * @n: First operand
 *
 * Return: 1 if string is palindrome. 0
 * otherwise.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
