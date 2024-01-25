#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) in a dlistint_t linked list.
 * @head: Pointer to the head node of the list.
 * Return: Sum of data in the linked list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
