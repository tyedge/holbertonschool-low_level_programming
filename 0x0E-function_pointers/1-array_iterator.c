#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes the function passed
 * in as a parameter on each element of the array
 * passed in as a parameter
 * @array: Array on which function will execute
 * @size: Size of the array
 * @action: Pointer to a function which takes one
 * integer as an argument and returns nothing
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
