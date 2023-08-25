#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints the list of linked elements.
 * @h: points to list_t
 *
 * Return: this will be the number of node printed
 */
size_t print_linked_list(struct Node *head) 
{
    size_t nodeCount = 0;

    while (head != NULL) {
        if (head->str == NULL)
            printf("[%zu] (nil)\n", nodeCount);
        else
            printf("[%zu] %s\n", head->len, head->str);

        head = head->next;
        nodeCount++;
    }

    return nodeCount;
}
