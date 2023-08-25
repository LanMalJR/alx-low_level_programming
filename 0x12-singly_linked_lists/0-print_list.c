#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints the list of linked elements.
 * @h: points to list_t
 *
 * Return: this will be the number of node printed
 */
size_t linked_list(const list_t *h) 
{
	size_t nodez;

	nodez = 0;

	while (h)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodez++;
		h = h->next;
	}
	return (nodez);
}
