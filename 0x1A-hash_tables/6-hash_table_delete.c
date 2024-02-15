#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *element, *temp;

	for (i = 0; i < ht->size; i++)
	{
		element = ht->array[i];
		while (element != NULL)
		{
			temp = element;
			element = element->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
