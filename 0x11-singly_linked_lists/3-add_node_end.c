#include "lists.h"

/**
 * add_node_end - adds a node to the end of a
 * linked list
 * @head: a pointer to a pointer to a list_t struct
 * @str: a string value to be added to the list
 *
 * Return: pointer to the new element's address
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t **other_nm = head;
	list_t *temp;
	list_t *newer;
	unsigned int i = 0;

	newer = malloc(sizeof(list_t));
	if (newer == NULL)
		return (NULL);
	newer->str = strdup(str);
	newer = malloc(sizeof(list_t));
	if (newer == NULL)
		return (NULL);
	newer->str = strdup(str);
	if (newer->str != '\0')
	{
		while (newer->str[i] != '\0')
		{
			i++;
		}
	}
	newer->len = i;
	if (*other_nm == NULL)
	{
		*other_nm = newer;
		return (newer);
	}
	else
	{
		temp = *other_nm;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newer;
	}
	return (temp);
}
