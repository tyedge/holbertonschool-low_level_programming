#include "holberton.h"

/**
 * _isupper - This program uses checks to see
 * if a character is an uppercase letter.
 * @c: First operand
 *
 * Return: 1 if c is uppercase. 0 otherwise.
 */

int _isupper(int c)
{
	int chkr;

	for (chkr = 65; chkr <= 90; chkr++)
	{
		if (c == chkr)
			return (1);
	}
	return (0);
}
