#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list of type dlistint_t.
 * @head: Pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
