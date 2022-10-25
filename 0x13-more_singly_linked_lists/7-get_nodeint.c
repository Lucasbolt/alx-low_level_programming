#include "lists.h"

/**
 * get_nodeint_at_index - fetch a node at a particular index
 * @head: starting node
 * @index: index to fetch node at
 * Return: the node that matches the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
