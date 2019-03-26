#include "lists.h"

/**
 * free_listint2 - frees memory allocated for
 * listint_t objects and sets head equal to NULL
 * @head: a pointer to a pointer to a listint_t struct
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *another = *head;
	listint_t *temp;

	while (another != NULL)
	{
		temp = another->next;
		free(another);
		another = temp;
	}
	*head = NULL;
}
