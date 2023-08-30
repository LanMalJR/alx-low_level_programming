#include "lists.h"

/**
 * reverse_listint - linked list reversed
 * @h: pointed to the 1st node on list
 *
 * Return: Success, the linked list is reversed
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *prv = NULL;
	listint_t *next = NULL;

	while (*h)
	{
		next = *h->next
		(*h)->next = prv;
		prv = *h;
		*h = next;
	}
	*h = prv;

	return (*h);
}
