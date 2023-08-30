#include "lists.h"

/**
 * free_listint - frees the liked list
 * @h: listint_t the ls to be freed
 *
 * Return: Sucess
 */
void free_listint(listint_t *h)
{
	listint_t *temp;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
