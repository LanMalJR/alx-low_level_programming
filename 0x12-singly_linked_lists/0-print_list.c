#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints the list of linked elements.
 * @h: points to list_t
 *
 * Return: this will be the number of node printed
 */
size_t print_linked_list(const list_t *h) 
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}
	return (node_count);

}
