#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the
 * beginning of a doubly linked list.
 * @head: Pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node on success, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
