#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a
 * dlistint_t linked list
 * @head: pointer to the first element of the list
 * @index: the index of the node to be return
 *
 * Return: a pointer to the indexed node
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
