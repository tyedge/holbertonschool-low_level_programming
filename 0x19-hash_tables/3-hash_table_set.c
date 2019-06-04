#include "hash_tables.h"

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
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->key = k;
	newnode->value = val;
	index = key_index((const unsigned char *)key, ht->size);
	if (arr == NULL)
	{
		arr[index] = newnode;
		arr[index]->next = NULL;
		return (1);
	}
	else
	{
		while (arr[index] != NULL)
		{
			if (arr[index]->key == k)
			{
				arr[index]->value = val;
				return (1);
			}
			arr[index] = arr[index]->next;
		}
	}
	return (0);
}
