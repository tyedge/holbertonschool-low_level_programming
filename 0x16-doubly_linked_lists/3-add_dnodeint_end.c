#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a
 * linked list
 * @head: pointer to a pointer to the list
 * @n: the value of the n member odlistint_t
 *
 * Return: pointer to the new node
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *traveler = *head;
	dlistint_t *insert = NULL;

	if (head == NULL)
		return (NULL);
	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);
	insert->n = n;
	insert->next = NULL;
	if (*head == NULL)
	{
		*head = insert;
		insert->prev = NULL;
		return (insert);
		}
	while (traveler->next != NULL)
		traveler = traveler->next;
	traveler->next = insert;
	insert->prev = traveler;
	return (insert);
}
