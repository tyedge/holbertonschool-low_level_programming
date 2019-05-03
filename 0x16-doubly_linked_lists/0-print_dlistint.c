#include "lists.h"

/**
 * print_dlistint - prints all elements of a
 * doubly linked list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *forward = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (forward != NULL)
	{
		count++;
		printf("%d\n", forward->n);
		forward = forward->next;
	}

	return (count);
}
