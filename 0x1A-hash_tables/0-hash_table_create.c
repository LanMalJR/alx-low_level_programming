#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table with a given size.
 * @size: The size of the hash table.
 * Return: A pointer to the newly created hash
 * table, or NULL if memory allocation fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result = malloc(sizeof(hash_table_t));

	if (result == NULL)
		return (NULL);

	result->size = size;
	result->array = malloc(sizeof(hash_node_t) * size);

	if (result->array == NULL)
		return (NULL);

	return (result);
}