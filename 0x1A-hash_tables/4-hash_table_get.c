#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key from the hash table.
 * @ht: The hash table from which the value will be retrieved.
 * @key: The key for which the value is sought.
 * Return: The value associated with the key on success, NULL if key not found.
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	index = key_index((const unsigned char *) key, ht->size);

	element = ht->array[index];
	while (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			return (element->value);
		}
		element = element->next;
	}
	return (NULL);
}
