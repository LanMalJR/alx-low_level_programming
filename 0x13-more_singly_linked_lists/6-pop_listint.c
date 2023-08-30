#include "lists.h"

/**
 * pop_listint - on linked list delets head of node
 * @h: oints to 1st element
 *
 * Return: Success
 */
int pop_listint(listint_t **h)
{
	listint_t *temp;
	int nm;

	if (!h || !*h)
		return (0);

	nm = (*h)->n;
	temp = (*h)->next;
	free(*h);
	*h = temp;

	return (nm);
}
