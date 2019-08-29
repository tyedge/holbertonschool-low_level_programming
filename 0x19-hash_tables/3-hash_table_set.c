#include "hash_tables.h"

hash_node_t *noder(hash_node_t **head, const char *key, const char *value);

/**
 * hash_table_set - this function adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **arr = ht->array, *newnode;
	void *k, *val;
	unsigned long int index;

	if (key == '\0')
		return (0);
	k = (void *)key;
	index = key_index(k, ht->size);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	newnode->key = k;
	newnode->value = val;
	if (arr[index] == NULL)
	{
		arr[index] = newnode;
		arr[index]->next = NULL;
		return (1);
	}
	else
	{
		newnode = noder(arr, key, value);
		return (1);
	}
}

/**
 * noder - adds a node to the beginning of a linked list
 * @head: a pointer to a pointer to a list_t struct
 * @key: the
 * @value: the value associated with the key
 *
 * Return: pointer to the new node
 *
 */

hash_node_t *noder(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t **other_nm = head;
	hash_node_t *newer;

	newer = malloc(sizeof(hash_node_t));
	if (newer == NULL)
		return (NULL);
	newer->key = (void *)key;
	newer->value = strdup(value);
	newer->next = *other_nm;
	*other_nm = newer;

	return (newer);
}
