#include "lists.h"

/**
 * free_list - frees memory allocated for list_t
 * objects
 * @head: a pointer to a pointer to a list_t struct
 *
 * Return: void
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

}
