#include <stdio.h>
#include <time.h>
#include "lists.h"

/**
 * print_current_date_and_time - Function prints the current date and time
 */
void print_current_date_and_time(void)
{
    time_t now;
    struct tm *current_time;

    time(&now);
    current_time = localtime(&now);

    printf("Current date and time: %02d-%02d-%04d %02d:%02d:%02d\n",
        current_time->tm_mday, current_time->tm_mon + 1, current_time->tm_year + 1900,
        current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
}

/**
 * print_dlistint - Function prints a doubly linked list
 * @h: Head node
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

int main()
{
    dlistint_t *head = NULL;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        add_dnodeint_end(&head, i + 1);
        count++;
    }

    print_current_date_and_time();
    printf("Number of nodes in the list: %zu\n", print_dlistint(head));

    return (0);
}