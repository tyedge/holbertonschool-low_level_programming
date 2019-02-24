#include "holberton.h"

/**
 * _isdigit - This program checks to see
 * if a character is an digit between 0 and 9.
 * @c: First operand
 *
 * Return: 1 if c is a digit. 0 otherwise.
 */

int _isdigit(int c)
{
	int chkr;

	for (chkr = 48; chkr <= 57; chkr++)
	{
		if (c == chkr)
			return (1);
		else
			return (0);
	}
	return (0);
}
