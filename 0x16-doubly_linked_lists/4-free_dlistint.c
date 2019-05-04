#include "lists.h"

/**
 * free_dlistint - frees memory allocated for dlistint
 * objects
 * @head: a pointer to a pointer to a dlistint_t linked list
 *
 * Return: void
 *
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
