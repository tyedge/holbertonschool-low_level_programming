#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list and returns its data
 * @head: a pointer to a pointer to a listint_t struct
 *
 * Return: data stored in head
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *access = *head;
	listint_t *temp;
	int store = access->n;

	if (access == NULL)
	{
		return (0);
	}
	else
	{
		temp = access->next;
		free(access);
		access = temp;
	}
	*head = temp;
	return (store);
}
