#include "sort.h"

/**
 * bubble_sort - this function sorts an array of
 * integers in ascending order using the Bubble
 * sort algorithm
 * @array: a pointer to the array to be sorted
 * @size: the size of the array to be sorted
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, a = 0;

	if (size < 2)
		return;

	for (; i < size - 1; i++)
	{
		for (; a < size - 1 - i; a++)
		{
			if (array[a] > array[a + 1])
			{
				temp = array[a + 1];
				array[a + 1] = array[a];
				array[a] = temp;
				print_array(array, size);
			}
		}
		a = 0;
	}
}
