#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list @index
 * @head: pointer to the starting node
 * @index: index of node to be deleted
 * Return: 1 on success, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *start = *head;
	listint_t *tmp;
	unsigned int i = 0;

	if (start == NULL)
		return (-1);
	if (index == 0)
	{
		*head = start->next;
		free(start);
		return (1);
	}
	for (; i < index - 1 && start != NULL; i++)
		start = start->next;
	if (start == NULL)
		return (-1);
	tmp = start->next;
	start->next = tmp->next;
	free(tmp);
	return (1);
}
