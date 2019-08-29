#include "lists.h"

/**
 * sum_listint - returns the sum of all the
 * data in a listint_t linked list
 * @head: pointer to a listint_t list
 *
 * Return: the sum of all the data in the list
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *numnode = head;
	int sum = 0;


	while (numnode != NULL)
	{
		sum += numnode->n;
		numnode = numnode->next;
	}
	return (sum);
}
