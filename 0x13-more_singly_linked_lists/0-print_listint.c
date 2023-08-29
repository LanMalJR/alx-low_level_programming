#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elemnts of a linked list
 * @h: points to the linked list
 *
 * Return: counts of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;
	
	while(h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}
	return(nm);
}
