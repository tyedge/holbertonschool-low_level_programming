#include "holberton.h"

/**
 * _isalpha - determines if c is an
 * alpha charcter or not.
 * @c: First operand
 *
 * Return: 1 if c is alpha character
 * 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
