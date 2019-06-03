#include "hash_tables.h"

/**
 * hash_table_create - this program creates a new hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	newtable = calloc(size, sizeof(hash_table_t *));
	if (newtable == NULL)
	{
		return (NULL);
	}

	return (newtable);
}
