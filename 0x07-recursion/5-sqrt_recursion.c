#include "holberton.h"
#include <stdio.h>

int sqrt_math(int n, int i);

/**
 *  _sqrt_recursion - returns the natural
 * square root of a number
 * @n: number to root square root of
 *
 * Return: sqrt of a number
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqrt_math(n, i));
}


/**
 * sqrt_math - tests i to see if it has reached the
 * square root of a number
 * @n: number to root square root of
 * @i: number to test
 *
 * Return: Always 0.
 */

int sqrt_math(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i)  < n)
		return (sqrt_math(n, (i + 1)));
	return (-1);
}
