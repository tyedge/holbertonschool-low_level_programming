#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning  of
 * a linked list
 * @head: a pointer to a pointer to a listint_t struct
 * @n: a string value to be added to the list
 *
 * Return: the address to the new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **other_nm = head;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *other_nm;
	*other_nm = newnode;

	return (newnode);
}
