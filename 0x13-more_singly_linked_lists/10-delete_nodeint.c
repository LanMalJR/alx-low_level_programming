#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in liinked list
 * @h: points to 1st element
 * @ndx: deleted node index
 *
 * Return: Success, deletes notee in linked list
 */
int delete_nodeint_at_index(listint_t **h, unsigned int ndx)
{
	listint_t *temp = *h;
	listint_t *crrnt = NULL;
	unsigned int i = 0;

	if (*h == NULL)
		return (-1);

	if (ndx == 0)
	{
		free(temp);
		return (1);
	}

	while (i < ndx - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	crrnt = temp->next;
	temp->next = crrnt->next;
	free(crrnt);

	return (1);
}
