#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: moves through the type List_t on inked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}
	return (nm);
}
