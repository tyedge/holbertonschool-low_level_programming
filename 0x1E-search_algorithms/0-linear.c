#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int *arr = array;
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (arr[i] == value)
		{
			printf("Value checked array[%i] = [%i]\n", i, arr[i]);
			return (arr[i]);
		}
		printf("Value checked array[%i] = [%i]\n", i, arr[i]);
	}
	return (-1);
}
