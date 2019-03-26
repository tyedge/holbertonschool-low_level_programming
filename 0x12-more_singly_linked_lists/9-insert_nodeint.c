#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position
 * @head: a pointer to a pointer to a listint_t struct
 * @idx: the index where the node should be added
 * @n: value of the n element of the node
 *
 * Return: a pointer to the new node or NULL if it
 * fails
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *access = *head;
	listint_t *newnode;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (access == NULL)
		return (NULL);

	while (i != idx)
	{
		if (access->next == NULL)
		{
			return (NULL);
		}
		else
		{
			prev = access;
			access = access->next;
			i++;
		}
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = access;
	prev->next = newnode;

	return (newnode);
}
