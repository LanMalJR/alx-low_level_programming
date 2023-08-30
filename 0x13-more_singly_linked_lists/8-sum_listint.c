#include "lists.h"

/**
 * sum_listint - sum of linked list is calcu
 * @h: liked list 1st node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *h)
{
	unsigned int sm = 0;

	while (h)
	{
		sm += h->n;
		h = h->next;
	}

	return (sm);
}
