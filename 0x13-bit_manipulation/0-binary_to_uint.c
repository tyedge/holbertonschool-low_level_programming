#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: a pointer to a string
 *
 * Return: unsigned int respresentation of a
 * binary number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		uint <<= 1;
		uint += *b - '0';
		b++;
	}
	return (uint);

}
