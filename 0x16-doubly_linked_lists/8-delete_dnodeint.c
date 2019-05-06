#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a
 * given position on a doubly linked list
 * @head: a pointer to a pointer to a dlistint_t struct
 * @index: the index where the node should be deleted
 *
 *
 * Return: 1 if it succeeded and -1 if it fails
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (i != index)
	{
		if (start->next == NULL)
		{
			return (-1);
		}
		else
		{
			start = start->next;
			i++;
		}
	}
	if (*head == start)
		*head = start->next;
	if (start->next != NULL)
		start->next->prev = start->prev;
	if (start->prev != NULL)
		start->prev->next = start->next;
	return (1);
}
