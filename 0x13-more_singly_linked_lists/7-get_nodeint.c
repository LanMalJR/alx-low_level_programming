#include "lists.h"

/**
 * get_nodeint_at_index - returns linked list node
 * on a certain index
 * @h: linked list 1st node
 * @ndx: index to be returned
 *
 * Return: Sucess, points to searched node
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int ndx)
{
	unsigned int i = 0;
	listint_t *temp = h;

	while (temp && i < ndx)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
