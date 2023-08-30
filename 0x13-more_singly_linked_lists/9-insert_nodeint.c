#include "lists.h"

/**
 * insert_nodeint_at_index - linked linked node is 
 * inserted
 * @h: the list is pointed to by the node
 * @ndx: the aded node is index nex
 * @n: new note get new insert
 *
 * Return: Success, points to new node
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int ndx, int n)
{
	unsigned int i;
	listint_t *nw;
	listint_t *temp = *h;

	nw =  malloc(sizeof(listint_t));
	if (!nw || !h)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (ndx == 0)
	{
		nw->next = *h;
		*h = nw;
		return (nw);
	}

	for (i = 0; temp && i < ndx; i++)
	{
		if (i == ndx - 1)
		{	
			nw->next = temp->next;
			temp->next = nw;
			return (nw);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
