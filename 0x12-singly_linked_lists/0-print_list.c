#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all elements
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nod;
	nod = 0;

	while (h)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		nod++;
		h = h->next;
	}
	return (nod);
}
