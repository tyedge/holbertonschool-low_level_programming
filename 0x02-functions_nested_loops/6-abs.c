#include "holberton.h"

/**
 * _abs - determines the absolute
 * value of the number n.
 * @n: First operand
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (n * -1);

	return (0);
}
