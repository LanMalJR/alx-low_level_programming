#include "lists.h"

/**
 * free_listint2 - a linked list is freed
 * @h: points to the freed listint_t
 *
 * Return: Success
 */
void free_listint2(listint_t **h)
{
	listint_t *temp;

	if (h == NULL)
		return;

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	*h = NULL;
}
