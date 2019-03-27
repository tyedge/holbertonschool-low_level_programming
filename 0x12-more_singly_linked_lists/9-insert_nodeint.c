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
	listint_t **current = head;
	listint_t *access = *head;
	listint_t *newnode;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *current;
		*current = newnode;
	}
	else
	{
		while (i != idx)
		{
			if (access->next != NULL)
			{
				prev = access;
				access = access->next;
				++i;
			}
			else if (idx <= (i + 1))
			{
				access->next = newnode;
				return (newnode);
			}
			else
				return (NULL);
		}
		newnode->next = access;
		prev->next = newnode;
	}
	return (newnode);
}
