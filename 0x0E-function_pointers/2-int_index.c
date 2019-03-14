#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches the array passed
 * in as a parameter using the pointer to the
 * cmp function which is also passed in as a
 * parameter and takes one integer argument
 * @array: Array on which function will execute
 * @size: Size of the array
 * @cmp: Pointer to a function which takes one
 * integer, is used to compare values, and
 * returns an integer
 *
 * Return: first array index which matches the
 * item searched for OR -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (array == NULL)
		exit(EXIT_FAILURE);
	if (size == 0)
		return (-1);
	if (cmp == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);
		if (ret != 0)
			return (i);
	}
	return (-1);
}
