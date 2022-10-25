#include "lists.h"

/**
 * free_listint - frees memory occupied by linked list
 * @head: starting node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
