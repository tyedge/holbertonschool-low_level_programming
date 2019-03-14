#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array on which function will execute
 * @size: Size of the array
 * @cmp: Pointer to a function
 *
 * Return: first array index which matches the
 * item searched for OR -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (array == NULL)
		return (-1);
	else if (size == 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);
		if (ret != 0)
			return (i);
	}
	return (-1);
}
