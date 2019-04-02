#include "holberton.h"

/**
 * flip_bits - returns the number of bits
 * that need to be flips to get from one
 * number to another
 * @n: First operand
 * @m: Second operand
 *
 * Return: the number of bits flipped
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int var;

	var = n ^ m;
	while (var != 0)
	{
		if (var & 1)
		{
			i++;
		}
		var >>= 1;
	}
	return (i);
}
