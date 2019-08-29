#include "holberton.h"

/**
 * _islower - determines if c is a
 * lowercase letter or not.
 * @c: First operand
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
