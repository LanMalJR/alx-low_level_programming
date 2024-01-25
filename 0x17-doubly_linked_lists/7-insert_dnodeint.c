#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head node of the list.
 * @idx: Position where the new node should be inserted.
 * @n: Value/data to be stored in the new node.
 * Return: Address of the new node on success, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;

		*h = newNode;
		return (newNode);
	}

	currentNode = *h;
	while (currentNode != NULL)
	{
		if (index == idx)
		{
			newNode->prev = currentNode->prev;
			newNode->next = currentNode;
			if (currentNode->prev != NULL)
				currentNode->prev->next = newNode;
			currentNode->prev = newNode;
			return (newNode);
		}
		currentNode = currentNode->next;
		index++;
	}
	free(newNode);
	return (NULL);
}
