#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a
 * linked list
 * @head: a pointer to a pointer to a listint_t struct
 * @n: an integer to be added to the list
 *
 * Return: pointer to the new element's address or NULL
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **other_nm = head;
	listint_t *temp;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*other_nm == NULL)
	{
		*other_nm = newnode;
		return (newnode);
	}
	else
	{
		temp = *other_nm;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (temp);
}
