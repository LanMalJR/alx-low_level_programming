#include "lists.h"

/**
 * add_nodeint_end - adds node ecnd of linked list
 * @h: points to the first element on the list
 * @n: new element of data inserted
 *
 * Return: points to the new node
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *nw;
	listint_t *temp = *h;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*h == NULL)
	{
		*h = nw;
		return (nw);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nw;

	return (nw);
}
