#include "lists.h"

/**
 * add_node - adds a node to the beginning  of
 * a linked list
 * @head: a pointer to a pointer to a list_t struct
 * @str: a string value to be added to the list
 *
 * Return: the number of nodes
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t **other_nm = head;
	list_t *newer;
	unsigned int i = 0;

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
	newer->next = *other_nm;
	*other_nm = newer;

	return (newer);
}
