#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns elements in a linked list
 * @h: points to list_t
 *
 * Return: num of elements
 */

size_t list_len(const list_t *h)
	size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
