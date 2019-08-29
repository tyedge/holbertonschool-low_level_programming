#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given position
 * @head: a pointer to a pointer to a listint_t struct
 * @index: the index where the node should be deleted
 *
 *
 * Return: 1 if it succeeded and -1 if it fails
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **access = head;
	listint_t *current = *head;
	listint_t *prev = NULL;
	listint_t *next = NULL;
	unsigned int i = 0;

	if (*access == NULL)
		return (-1);

	while (i != index)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		else
		{
			prev = current;
			current = current->next;
			i++;
		}
	}
	if (i == 0)
	{
		next = current->next;
		free(current);
		current = next;
		*head = current;
	}
	else
	{
		prev->next = current->next;
		free(current);
	}
	return (1);
}
