#include "lists.h"

/**
 * print_listint - prints all elements of a
 * linked list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *numlink = h;
	unsigned int ret = 0;

	while (numlink != NULL)
	{
		printf("%d\n", numlink->n);
		ret++;
		numlink = numlink->next;
	}
	return (ret);
}
