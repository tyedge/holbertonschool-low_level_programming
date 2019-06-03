#include "hash_tables.h"

/**
 * key_index - this function gives you the index of a key
 * @key: the key to be hashed
 * @size: the size of the array
 *
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashnum;
	unsigned long int index;

	if (key == '\0')
		return (0);
	hashnum = hash_djb2(key);
	index = hashnum % size;
	return (index);

}
