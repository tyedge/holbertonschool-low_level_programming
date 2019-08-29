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
	listint_t *temp;
	int store;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	store = temp->n;
	free(temp);
	return (store);
}
