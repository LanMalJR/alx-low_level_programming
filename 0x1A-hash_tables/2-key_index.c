#include "hash_tables.h"
/**
 * key_index - Retrieves the index of a key in a hash table array.
 * @key: The key.
 * @size: The size of the array representing the hash table.
 * Return: The index where the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue = hash_djb2(key);

	unsigned long int index = hashValue % size;

	return (index);
}
