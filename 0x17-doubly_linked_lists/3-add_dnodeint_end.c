#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node on success, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *currentNode;

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
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);
}