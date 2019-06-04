#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to search for
 *
 * Return: the value associated with the element, or NULL if key isn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t **other = ht->array;

	while (other != NULL)
	{
		if (other->key == key)



}
