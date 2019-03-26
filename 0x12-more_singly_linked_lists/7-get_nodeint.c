#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a
 * listint_t linked list.
 * @head: a pointer to a listint_t struct
 * @index: the index of the node, starting at 0
 *
 * Return: a pointer to the nth head if it exists,
 * and NULL otherwise
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i != index)
	{
		if (head->next == NULL)
			return (NULL);
		else
			head = head->next;
		i++;
	}
	return (head);
}
