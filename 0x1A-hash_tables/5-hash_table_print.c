#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to be printed.
 */

#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht) {
    if (ht == NULL || ht->array == NULL) {
        fprintf(stderr, "Error: Invalid hash table.\n");
        return;
    }

    printf("{");
    bool is_first = true; /* Flag to check if it's the first element in the hash table */ 

    for (size_t i =  0; i < ht->size; i++) {
        hash_node_t *element = ht->array[i];

        while (element != NULL) {
            if (!is_first) {
                printf(", ");
            } else {
                is_first = false;
            }
            printf("'%s': '%s'", element->key, element->value);
            element = element->next;
        }
    }
    printf("}\n");
}
