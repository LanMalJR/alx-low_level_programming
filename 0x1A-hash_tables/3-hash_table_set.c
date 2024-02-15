#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key associated with the value.
 * @value: The value to be added.
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *newElement = malloc(sizeof(hash_node_t));

	if (newElement == NULL)
		return (0);

	newElement->key = strdup(key);
	if (newElement->key == NULL)
	{
		free(newElement);
		return (0);
	}

	newElement->value = strdup(value);
	if (newElement->value == NULL)
	{
		free(newElement->value);
		return (0);
	}

	newElement->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newElement;
	}
	else
	{
		newElement->next = ht->array[index];
		ht->array[index] = newElement;
	}

	return (1);
}
