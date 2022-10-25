#include "lists.h"

/**
 * free_listint2 - frees memory occupied by linked list
 * @head: stores the pointer to the starting node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *start = *head;

	if (start == NULL)
		return;
	while (start)
	{
		tmp = start->next;
		free(start);
		start = tmp;
	}
	*head = start;
}
