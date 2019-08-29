#include "holberton.h"

/**
 * clear_bit - sets the value of a bit
 * at a given index to 0
 * @n: pointer to a value
 * @index: the index at which to set bit
 *
 * Return: value at index or -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL || index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
