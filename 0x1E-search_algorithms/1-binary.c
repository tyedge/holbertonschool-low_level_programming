#include "search_algos.h"

int finder_func(int array[], size_t size_low, size_t size_up, int val);
void printer_func(int array[], size_t size_low, size_t size_up);

/**
 * binary_search - this function searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lower = 0;
	size_t upper = size - 1;

	int ret;

	if (array == NULL)
		return (-1);

	ret = finder_func(array, lower, upper, value);

	return (ret);

}


/**
 * finder_func - this function searches for a value in a sorted array
 * and returns it to the binary_search function which calls it
 * @array: a pointer to the first element of the array to be searched
 * @size_low: the lower bound of the array
 * @size_up: the upper bound of the array
 * @val: the value to search for
 *
 * Return: the index where value is located
 */

int finder_func(int array[], size_t size_low, size_t size_up, int val)
{
	unsigned int mid;

	mid = size_low + (size_up - size_low) / 2;

	if (size_up >= size_low)
	{
		printer_func(array, size_low, size_up);

		if (array[mid] == val)
			return (mid);
		if (array[mid] > val)
			return (finder_func(array, size_low, mid - 1, val));
		return (finder_func(array, mid + 1, size_up, val));
	}
	return (-1);
}


/**
 * printer_func - this function prints the array being searched
 * @array: a pointer to the first element of the array
 * @size_low: the lower bound of the array
 * @size_up: the upper bound of the array
 *
 * Return: void
 */

void printer_func(int array[], size_t size_low, size_t size_up)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = size_low; i <= size_up; i++)
	{
		if (i == size_up)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}
}
