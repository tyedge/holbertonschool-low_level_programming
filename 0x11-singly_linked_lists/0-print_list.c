#include "lists.h"

/**
 * print_list - prints all elements of a
 * linked list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	const list_t *this_node = h;
	unsigned int i = 0, ret = 0;


	while (this_node != NULL)
	{

		if (this_node->str != '\0')
		{
			while (this_node->str[i])
			{
				i++;
			}
			printf("[%i] %s\n", i, this_node->str);
		}
		else
		{
			printf("[%i] %p\n", i, this_node->str);
		}
		ret++;
		this_node = this_node->next;
	}
	return (ret);
}
