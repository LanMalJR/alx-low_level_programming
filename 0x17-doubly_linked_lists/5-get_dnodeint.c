#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the desired node.
 * Return: Address of the node on success, or NULL on failure.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int idx;

	currentNode = head;
	idx = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (currentNode != NULL && idx < index)
	{
		currentNode = currentNode->next;
		idx++;
	}

	return (currentNode);
}
