#include "lists.h"

/**
 * list_len - counts the elements in a linked
 * list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	const list_t *this_node = h;
	unsigned int count = 0;


	while (this_node != NULL)
	{
		count++;
		this_node = this_node->next;
	}
	return (count);
}
