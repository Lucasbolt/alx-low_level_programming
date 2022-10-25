#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to the head node
 * Return: n element of head on success
 *		0 on failure.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *start = *head;
	int num;

	if (start == NULL)
		return (0);
	tmp = start->next;
	num = start->n;
	free(start);
	*head = tmp;
	return (num);

}
