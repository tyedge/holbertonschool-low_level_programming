#include "lists.h"

unsigned int find_len(dlistint_t *h);

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 * @h: a pointer to a pointer to a dlistint_t struct
 * @idx: the index where the node should be added
 * @n: value of the n element of the node
 *
 * Return: a pointer to the new node or NULL if it
 * fails
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **dup = h;
	dlistint_t *node = *h, *newnode;
	unsigned int len, i = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	len = find_len(*dup);
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		newnode = add_dnodeint(dup, n);
		return (newnode);
	}
	else if (idx == len)
	{
		newnode = add_dnodeint_end(dup, n);
		return (newnode);
	}
	while (i < idx)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = node->prev;
	node->prev = newnode;
	newnode->next = node;
	if (node->prev != NULL)
		newnode->prev->next = newnode;
	else
		node = newnode;
	return (newnode);
}


/**
 * find_len - counts and returns the
 * number
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 *
 */

unsigned int find_len(dlistint_t *h)
{
	dlistint_t *cntr = h;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (cntr != NULL)
	{
		count++;
		cntr = cntr->next;
	}
	return (count);
}
