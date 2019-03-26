#include "lists.h"

/**
 * free_listint - frees memory allocated for
 * listint_t objects
 * @head: a pointer to a pointer to a list_t struct
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
