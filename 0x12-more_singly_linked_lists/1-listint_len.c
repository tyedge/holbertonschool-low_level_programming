#include "lists.h"

/**
 * listint_len - counts the elements in a linked
 * list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *numnode = h;
	unsigned int count = 0;


	while (numnode != NULL)
	{
		count++;
		numnode = numnode->next;
	}
	return (count);
}
