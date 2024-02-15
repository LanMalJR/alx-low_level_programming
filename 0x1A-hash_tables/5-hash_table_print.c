#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *element;
	bool is_printed = false;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		element = ht->array[i];

		while (element != NULL)
		{
			if (is_printed == true)
			{
				printf(", ");
			}
			printf("'%s': '%s'", element->key, element->value);
			is_printed = true;

			element = element->next;
		}
	}
	printf("}\n");
}
