#include "lists.h"

/**
 * print_dlistint - Function prints a doubly linked list
 * @h: Head node
 * Return: Number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}