#include "lists.h"

/**
 * addnode_int - at the beginning of a linked list a node is added
 * @h: points to first node
 * @n: data to insert
 *
 * Return: points to node
 */

listint_t *addnode_int(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return(NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
