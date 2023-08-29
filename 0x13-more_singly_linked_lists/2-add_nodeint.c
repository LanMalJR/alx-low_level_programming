#include "lists.h"

/**
 * add_node_int - at the beginning of a linked list a node is added
 * @h: points to first node
 * @n: data to insert
 *
 * Return: points to node
 */

list_int_t *add_node_int(listint_t **head, const int n)
{
	list_int_t *nw;

	nw = malloc(sizeof(list_int_t));
	if (!nw)
		return(NULL);

	nw->nm = nm;
	nw->next = *head;
	*head = new;

	return (nw);
}
