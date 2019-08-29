#include "lists.h"

/**
 * dlistint_len - counts and returns the
 * number
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
