#include "holberton.h"

/**
 * get_bit - returns the value of a bit
 * at a given index
 * @n: the number to be checked
 * @index: the index at which to check
 *
 * Return: value of bit or -1
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);

	return (!!(n & (1 << index)));

}
