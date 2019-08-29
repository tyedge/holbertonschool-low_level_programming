#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * of a linked list
 * @head: pointer to the first element of the list
 * @n: the value of the n member odlistint_t
 *
 * Return: pointer to the new node
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *lister = *head;

	if (head == NULL)
		return (NULL);

	lister = malloc(sizeof(dlistint_t));
	if (lister == NULL)
		return (NULL);
	lister->n = n;
	lister->next = *head;
	lister->prev = NULL;
	if (*head != NULL)
		(*head)->prev = lister;
	*head = lister;
	return (lister);
}
